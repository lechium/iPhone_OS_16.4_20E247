//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCCloudData : NSManagedObject
{
    id <BCCloudDataPrivacyDelegate> _privacyDelegate;	// 8 = 0x8
}

+ (id)localIdentifierFromRecord:(id)arg1;	// IMP=0x002000000003fdd4
+ (id)propertyIDKey;	// IMP=0x001000000003fd8c
- (void).cxx_destruct;	// IMP=0x002000000003feba
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate; // @synthesize privacyDelegate=_privacyDelegate;
- (id)zoneName;	// IMP=0x001000000003fd44
- (id)identifier;	// IMP=0x001000000003fd01
- (id)recordType;	// IMP=0x001000000003fcb9
- (id)configuredRecordFromAttributes;	// IMP=0x001000000003fc25
- (void)incrementEditGeneration;	// IMP=0x001000000003fbf3
@property(copy, nonatomic) CKRecord *systemFields; // @dynamic systemFields;
- (_Bool)hasValidSalt;	// IMP=0x001000000003f182
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;	// IMP=0x001000000003f028
- (_Bool)isEqualExceptForDate:(id)arg1;	// IMP=0x001000000003ed58
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;	// IMP=0x001000000003e8b7
- (id)mutableCopy;	// IMP=0x001000000003e889

// Remaining properties
@property(copy, nonatomic) NSData *ckSystemFields; // @dynamic ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deletedFlag; // @dynamic deletedFlag;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long editGeneration; // @dynamic editGeneration;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(copy, nonatomic) NSString *saltedHashedID; // @dynamic saltedHashedID;
@property(readonly) Class superclass;
@property(nonatomic) long long syncGeneration; // @dynamic syncGeneration;

@end
