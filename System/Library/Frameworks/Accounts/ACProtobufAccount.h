//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ACProtobufAccountCredential, ACProtobufAccountType, ACProtobufDate, ACProtobufURL, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufAccount : PBCodable
{
    NSString *_accountDescription;	// 8 = 0x8
    ACProtobufAccountType *_accountType;	// 16 = 0x10
    NSString *_authenticationType;	// 24 = 0x18
    ACProtobufAccountCredential *_credential;	// 32 = 0x20
    NSString *_credentialType;	// 40 = 0x28
    NSMutableArray *_dataclassProperties;	// 48 = 0x30
    ACProtobufDate *_date;	// 56 = 0x38
    NSMutableArray *_dirtyAccountProperties;	// 64 = 0x40
    NSMutableArray *_dirtyDataclassProperties;	// 72 = 0x48
    NSMutableArray *_dirtyProperties;	// 80 = 0x50
    NSMutableArray *_enabledDataclasses;	// 88 = 0x58
    NSString *_identifier;	// 96 = 0x60
    ACProtobufDate *_lastCredentialRenewalRejectionDate;	// 104 = 0x68
    NSString *_modificationID;	// 112 = 0x70
    ACProtobufURL *_objectID;	// 120 = 0x78
    NSString *_owningBundleID;	// 128 = 0x80
    ACProtobufAccount *_parentAccount;	// 136 = 0x88
    NSMutableArray *_properties;	// 144 = 0x90
    NSMutableArray *_provisionedDataclasses;	// 152 = 0x98
    NSString *_username;	// 160 = 0xa0
    _Bool _active;	// 168 = 0xa8
    _Bool _authenticated;	// 169 = 0xa9
    _Bool _supportsAuthentication;	// 170 = 0xaa
    _Bool _visible;	// 171 = 0xab
    _Bool _warmingUp;	// 172 = 0xac
    struct {
        unsigned int warmingUp:1;
    } _has;	// 176 = 0xb0
}

+ (Class)dirtyDataclassPropertiesType;	// IMP=0x001000000004779f
+ (Class)dirtyAccountPropertiesType;	// IMP=0x00100000000476cd
+ (Class)dirtyPropertiesType;	// IMP=0x00100000000475fb
+ (Class)provisionedDataclassesType;	// IMP=0x00100000000474d5
+ (Class)enabledDataclassesType;	// IMP=0x0010000000047403
+ (Class)dataclassPropertiesType;	// IMP=0x0010000000047307
+ (Class)propertiesType;	// IMP=0x0010000000047220
- (void).cxx_destruct;	// IMP=0x000000000004b8d4
@property(retain, nonatomic) NSString *modificationID; // @synthesize modificationID=_modificationID;
@property(nonatomic) _Bool warmingUp; // @synthesize warmingUp=_warmingUp;
@property(retain, nonatomic) NSMutableArray *dirtyDataclassProperties; // @synthesize dirtyDataclassProperties=_dirtyDataclassProperties;
@property(retain, nonatomic) NSMutableArray *dirtyAccountProperties; // @synthesize dirtyAccountProperties=_dirtyAccountProperties;
@property(retain, nonatomic) NSMutableArray *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;
@property(retain, nonatomic) NSString *owningBundleID; // @synthesize owningBundleID=_owningBundleID;
@property(retain, nonatomic) ACProtobufDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *credentialType; // @synthesize credentialType=_credentialType;
@property(retain, nonatomic) NSString *authenticationType; // @synthesize authenticationType=_authenticationType;
@property(retain, nonatomic) NSMutableArray *provisionedDataclasses; // @synthesize provisionedDataclasses=_provisionedDataclasses;
@property(retain, nonatomic) NSMutableArray *enabledDataclasses; // @synthesize enabledDataclasses=_enabledDataclasses;
@property(retain, nonatomic) ACProtobufAccount *parentAccount; // @synthesize parentAccount=_parentAccount;
@property(retain, nonatomic) ACProtobufURL *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSMutableArray *dataclassProperties; // @synthesize dataclassProperties=_dataclassProperties;
@property(nonatomic) _Bool supportsAuthentication; // @synthesize supportsAuthentication=_supportsAuthentication;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) ACProtobufDate *lastCredentialRenewalRejectionDate; // @synthesize lastCredentialRenewalRejectionDate=_lastCredentialRenewalRejectionDate;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(retain, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) ACProtobufAccountCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) ACProtobufAccountType *accountType; // @synthesize accountType=_accountType;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004abd0
- (unsigned long long)hash;	// IMP=0x000000000004a8e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004a3b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004985c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000049252
- (void)writeTo:(id)arg1;	// IMP=0x0000000000048a0d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000048a00
- (id)dictionaryRepresentation;	// IMP=0x00000000000478b9
- (id)description;	// IMP=0x000000000004780a
@property(readonly, nonatomic) _Bool hasModificationID;
@property(nonatomic) _Bool hasWarmingUp;
- (id)dirtyDataclassPropertiesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000047782
- (unsigned long long)dirtyDataclassPropertiesCount;	// IMP=0x0000000000047765
- (void)addDirtyDataclassProperties:(id)arg1;	// IMP=0x00000000000476fb
- (void)clearDirtyDataclassProperties;	// IMP=0x00000000000476de
- (id)dirtyAccountPropertiesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000476b0
- (unsigned long long)dirtyAccountPropertiesCount;	// IMP=0x0000000000047693
- (void)addDirtyAccountProperties:(id)arg1;	// IMP=0x0000000000047629
- (void)clearDirtyAccountProperties;	// IMP=0x000000000004760c
- (id)dirtyPropertiesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000475de
- (unsigned long long)dirtyPropertiesCount;	// IMP=0x00000000000475c1
- (void)addDirtyProperties:(id)arg1;	// IMP=0x0000000000047557
- (void)clearDirtyProperties;	// IMP=0x000000000004753a
@property(readonly, nonatomic) _Bool hasOwningBundleID;
@property(readonly, nonatomic) _Bool hasDate;
@property(readonly, nonatomic) _Bool hasCredentialType;
@property(readonly, nonatomic) _Bool hasAuthenticationType;
- (id)provisionedDataclassesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000474b8
- (unsigned long long)provisionedDataclassesCount;	// IMP=0x000000000004749b
- (void)addProvisionedDataclasses:(id)arg1;	// IMP=0x0000000000047431
- (void)clearProvisionedDataclasses;	// IMP=0x0000000000047414
- (id)enabledDataclassesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000473e6
- (unsigned long long)enabledDataclassesCount;	// IMP=0x00000000000473c9
- (void)addEnabledDataclasses:(id)arg1;	// IMP=0x000000000004735f
- (void)clearEnabledDataclasses;	// IMP=0x0000000000047342
@property(readonly, nonatomic) _Bool hasParentAccount;
@property(readonly, nonatomic) _Bool hasObjectID;
- (id)dataclassPropertiesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000472ea
- (unsigned long long)dataclassPropertiesCount;	// IMP=0x00000000000472cd
- (void)addDataclassProperties:(id)arg1;	// IMP=0x0000000000047263
- (void)clearDataclassProperties;	// IMP=0x0000000000047246
@property(readonly, nonatomic) _Bool hasLastCredentialRenewalRejectionDate;
- (id)propertiesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000047203
- (unsigned long long)propertiesCount;	// IMP=0x00000000000471e6
- (void)addProperties:(id)arg1;	// IMP=0x000000000004717c
- (void)clearProperties;	// IMP=0x000000000004715f
@property(readonly, nonatomic) _Bool hasUsername;
@property(readonly, nonatomic) _Bool hasAccountDescription;
@property(readonly, nonatomic) _Bool hasCredential;
@property(copy, nonatomic) NSDictionary *dataclassPropertiesDictionary;
@property(copy, nonatomic) NSDictionary *propertiesDictionary;

@end
