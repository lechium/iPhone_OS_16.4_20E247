//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreIDVPAD/PADFrameMonitor-Protocol.h>

@class NSArray;

@protocol PADVNFaceprintDetector <PADFrameMonitor>
@property(readonly, nonatomic) NSArray *faceprints;
- (void)processFrames:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
@end
