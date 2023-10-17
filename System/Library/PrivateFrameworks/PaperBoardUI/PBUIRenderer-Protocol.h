//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PaperBoardUI/NSObject-Protocol.h>

@class IOSurface;
@protocol PBUIRenderRequest;

@protocol PBUIRenderer <NSObject>
@property(readonly, nonatomic) struct CGColorSpace *colorSpace;
- (void)renderRequest:(id <PBUIRenderRequest>)arg1 completionHandler:(void (^)(IOSurface *, NSError *))arg2;
- (IOSurface *)renderRequest:(id <PBUIRenderRequest>)arg1 error:(out id *)arg2;
@end
