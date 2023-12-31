//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, PFUbiquityKnowledgeVector;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerSnapshot : NSObject
{
    NSDictionary *_logSnapshot;	// 8 = 0x8
    NSMutableDictionary *_diffFromPrevious;	// 16 = 0x10
    PFUbiquityKnowledgeVector *_kv;	// 24 = 0x18
    NSNumber *_transactionNumber;	// 32 = 0x20
    NSDate *_transactionDate;	// 40 = 0x28
    NSString *_exportingPeerID;	// 48 = 0x30
}

- (long long)compare:(id)arg1;	// IMP=0x00000000002f51b5
- (id)description;	// IMP=0x00000000002f5122
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002f502b
- (void)dealloc;	// IMP=0x00000000002f4fa6
- (id)initWithExportingPeerID:(id)arg1 logSnapshot:(id)arg2 transactionNumber:(id)arg3 transactionDate:(id)arg4 andKnowledgeVector:(id)arg5;	// IMP=0x00000000002f4f1e
- (id)initWithTranasctionEntry:(id)arg1 andLogSnapshot:(id)arg2;	// IMP=0x00000000002f4e94

@end

