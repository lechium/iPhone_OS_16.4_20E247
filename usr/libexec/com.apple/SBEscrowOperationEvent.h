//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString, NSUUID;

@interface SBEscrowOperationEvent : NSObject
{
    NSDate *_timestamp;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSUUID *_operationId;	// 24 = 0x18
    NSUUID *_activityId;	// 32 = 0x20
    NSString *_activityLabel;	// 40 = 0x28
    MISSING_TYPE *_recordId;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000055f0d
- (void).cxx_destruct;	// IMP=0x002000000005641d
@property(readonly, nonatomic) NSString *recordId; // @synthesize recordId=_recordId;
@property(readonly, nonatomic) NSString *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(readonly, nonatomic) NSUUID *activityId; // @synthesize activityId=_activityId;
@property(readonly, nonatomic) NSUUID *operationId; // @synthesize operationId=_operationId;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000562f9
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000056033
- (id)initWithOperationId:(id)arg1 activityId:(id)arg2 activityLabel:(id)arg3 recordId:(id)arg4 type:(unsigned long long)arg5 context:(id)arg6;	// IMP=0x0010000000055f15

@end
