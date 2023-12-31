//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKEventMetric, MISSING_TYPE, NSMutableSet, NSString;

@interface CPLCloudKitMetric : NSObject
{
    NSMutableSet *_outstandingOperations;	// 8 = 0x8
    CKEventMetric *_ckEventMetric;	// 16 = 0x10
    _Bool _submitted;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    CKContainer *_container;	// 40 = 0x28
    long long _result;	// 48 = 0x30
    unsigned long long _outstandingBeginCount;	// 56 = 0x38
    NSString *_identifier;	// 64 = 0x40
}

+ (void)initialize;	// IMP=0x0040000000139c74
- (void).cxx_destruct;	// IMP=0x002000000013a8a2
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool submitted; // @synthesize submitted=_submitted;
@property(readonly, nonatomic) unsigned long long outstandingBeginCount; // @synthesize outstandingBeginCount=_outstandingBeginCount;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)redactedDescription;	// IMP=0x001000000013a7b6
- (id)description;	// IMP=0x001000000013a720
@property(readonly, nonatomic) NSString *resultDescription;
- (void)prepareCKEventMetric:(id)arg1;	// IMP=0x001000000013a6f1
- (void)drop;	// IMP=0x001000000013a6d1
- (MISSING_TYPE *)setError: /* Error: Ran out of types for this method. */;	// IMP=0x001000000013a65b
- (void)end;	// IMP=0x001000000013a569
- (void)begin;	// IMP=0x001000000013a4a8
- (void)associatedOperationDidComplete:(id)arg1;	// IMP=0x001000000013a2c4
- (void)associateWithOperation:(id)arg1;	// IMP=0x001000000013a176
- (void)_submitIfNecessary;	// IMP=0x0010000000139fb8
- (id)initWithName:(id)arg1;	// IMP=0x0010000000139d26

@end

