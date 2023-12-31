//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (HealthDaemon)
+ (id)hd_recordWithSystemData:(id)arg1 error:(id *)arg2;	// IMP=0x00800000004fbfb7
- (id)hd_systemData;	// IMP=0x00100000004fc3a9
- (id)hd_optionalEncryptedValueForKey:(id)arg1 type:(Class)arg2 error:(id *)arg3;	// IMP=0x00100000004fbf04
- (id)hd_optionalValueForKey:(id)arg1 type:(Class)arg2 error:(id *)arg3;	// IMP=0x00100000004fbe7d
- (id)hd_requiredEncryptedValueForKey:(id)arg1 type:(Class)arg2 error:(id *)arg3;	// IMP=0x00100000004fbd4c
- (id)hd_requiredValueForKey:(id)arg1 type:(Class)arg2 error:(id *)arg3;	// IMP=0x00100000004fbc37
- (_Bool)hd_setEncryptedValuesIfChanged:(id)arg1;	// IMP=0x00100000004fbb3d
- (_Bool)hd_setEncryptedValue:(id)arg1 ifChangedForKey:(id)arg2;	// IMP=0x00100000004fb9a2
- (_Bool)hd_setValuesIfChanged:(id)arg1;	// IMP=0x00100000004fb8a8
- (_Bool)hd_setValue:(id)arg1 ifChangedForKey:(id)arg2;	// IMP=0x00100000004fb7b0
- (_Bool)hd_isCKShare;	// IMP=0x00100000004fb7a8
- (_Bool)hd_equivalentRecord:(id)arg1;	// IMP=0x00100000004fb5be
@end

