//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSString, NSURL, SNRecordOperator;

__attribute__((visibility("hidden")))
@interface SNUltronReportOperator : NSObject
{
    SNRecordOperator *_recordOperator;	// 8 = 0x8
    NSURL *_destinationDirectory;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    NSString *_requestDescription;	// 32 = 0x20
    NSString *_buildVersion;	// 40 = 0x28
    NSMutableArray *_detectionResults;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001eb77
- (void)processTerminationWithOptionalError:(id)arg1 portID:(id)arg2 downstreamHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001e796
- (void)processInput:(id)arg1 portID:(id)arg2 downstreamHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001e69c
- (id)init;	// IMP=0x000000000001e41d

@end
