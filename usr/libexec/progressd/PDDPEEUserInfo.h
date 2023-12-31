//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPUserInfo;

@interface PDDPEEUserInfo : PBCodable
{
    NSMutableArray *_locations;	// 8 = 0x8
    NSString *_organizationId;	// 16 = 0x10
    NSString *_organizationName;	// 24 = 0x18
    NSMutableArray *_privileges;	// 32 = 0x20
    NSMutableArray *_roles;	// 40 = 0x28
    PDDPUserInfo *_userInfo;	// 48 = 0x30
    _Bool _analyticsOptedIn;	// 56 = 0x38
    _Bool _isEduUser;	// 57 = 0x39
    _Bool _organizationFacetimeMessagesEnabled;	// 58 = 0x3a
    _Bool _organizationProgressTrackingAllowed;	// 59 = 0x3b
    struct {
        unsigned int analyticsOptedIn:1;
        unsigned int isEduUser:1;
        unsigned int organizationFacetimeMessagesEnabled:1;
        unsigned int organizationProgressTrackingAllowed:1;
    } _has;	// 60 = 0x3c
}

+ (Class)locationsType;	// IMP=0x002000000012cb92
+ (Class)rolesType;	// IMP=0x001000000012cac0
+ (Class)privilegesType;	// IMP=0x001000000012c9ee
- (void).cxx_destruct;	// IMP=0x002000000012efb1
@property(nonatomic) _Bool analyticsOptedIn; // @synthesize analyticsOptedIn=_analyticsOptedIn;
@property(nonatomic) _Bool organizationFacetimeMessagesEnabled; // @synthesize organizationFacetimeMessagesEnabled=_organizationFacetimeMessagesEnabled;
@property(nonatomic) _Bool organizationProgressTrackingAllowed; // @synthesize organizationProgressTrackingAllowed=_organizationProgressTrackingAllowed;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *organizationId; // @synthesize organizationId=_organizationId;
@property(nonatomic) _Bool isEduUser; // @synthesize isEduUser=_isEduUser;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSMutableArray *roles; // @synthesize roles=_roles;
@property(retain, nonatomic) NSMutableArray *privileges; // @synthesize privileges=_privileges;
@property(retain, nonatomic) PDDPUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000012ea6f
- (unsigned long long)hash;	// IMP=0x001000000012e91b
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000012e6ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000012e16e
- (void)copyTo:(id)arg1;	// IMP=0x001000000012debf
- (void)writeTo:(id)arg1;	// IMP=0x001000000012daf5
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000012dae8
- (id)dictionaryRepresentation;	// IMP=0x001000000012cda0
- (id)description;	// IMP=0x001000000012ccf1
@property(nonatomic) _Bool hasAnalyticsOptedIn;
@property(nonatomic) _Bool hasOrganizationFacetimeMessagesEnabled;
@property(nonatomic) _Bool hasOrganizationProgressTrackingAllowed;
@property(readonly, nonatomic) _Bool hasOrganizationName;
@property(readonly, nonatomic) _Bool hasOrganizationId;
@property(nonatomic) _Bool hasIsEduUser;
- (id)locationsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000012cb75
- (unsigned long long)locationsCount;	// IMP=0x001000000012cb58
- (void)addLocations:(id)arg1;	// IMP=0x001000000012caee
- (void)clearLocations;	// IMP=0x001000000012cad1
- (id)rolesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000012caa3
- (unsigned long long)rolesCount;	// IMP=0x001000000012ca86
- (void)addRoles:(id)arg1;	// IMP=0x001000000012ca1c
- (void)clearRoles;	// IMP=0x001000000012c9ff
- (id)privilegesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000012c9d1
- (unsigned long long)privilegesCount;	// IMP=0x001000000012c9b4
- (void)addPrivileges:(id)arg1;	// IMP=0x001000000012c94a
- (void)clearPrivileges;	// IMP=0x001000000012c92d
@property(readonly, nonatomic) _Bool hasUserInfo;

@end

