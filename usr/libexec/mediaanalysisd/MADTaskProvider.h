//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MADTaskProvider : NSObject
{
}

+ (unsigned long long)taskID;	// IMP=0x00400000000d4b0e
- (void)retireTask:(id)arg1;	// IMP=0x00400000000d4b5b
- (id)nextClusterProcessingTask;	// IMP=0x00100000000d4b53
- (id)nextDownloadAssetProcessingTask;	// IMP=0x00100000000d4b4b
- (id)nextAssetProcessingTask;	// IMP=0x00100000000d4b43
- (unsigned long long)iterations;	// IMP=0x00100000000d4b38
- (unsigned long long)priority;	// IMP=0x00100000000d4b30
- (unsigned long long)taskID;	// IMP=0x00100000000d4b16

@end
