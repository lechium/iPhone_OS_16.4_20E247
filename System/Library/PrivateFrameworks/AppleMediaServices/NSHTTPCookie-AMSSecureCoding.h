//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSHTTPCookie.h>

@class NSString;

@interface NSHTTPCookie (AMSSecureCoding)
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000391b7b
+ (id)classesForPropertyCoding;	// IMP=0x0010000000391970
+ (id)ams_cookieByMarkingCookieAsDeleted:(id)arg1;	// IMP=0x0010000000391b83
+ (id)ams_propertiesForCookies:(id)arg1;	// IMP=0x0010000000393a2e
+ (id)ams_cookiesForProperties:(id)arg1;	// IMP=0x00100000003939c5
+ (id)ams_cookiesByMergingProperties:(id)arg1 intoProperties:(id)arg2;	// IMP=0x0010000000392fcc
+ (id)ams_dataByArchivingPropertiesOfCookies:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000393b22
+ (id)ams_cookiesByUnarchivingPropertyData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000393a5f
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000391ab8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000391a32
@property(readonly, nonatomic) NSString *hashedDescription;
- (_Bool)ams_shouldReplaceCookie:(id)arg1;	// IMP=0x0010000000392cb6
- (_Bool)ams_matchesURL:(id)arg1;	// IMP=0x0010000000392c2f
- (_Bool)ams_isEquivalent:(id)arg1;	// IMP=0x0010000000392acf
- (_Bool)ams_isEqualToCookie:(id)arg1;	// IMP=0x00100000003921fe
- (_Bool)_secureOnlyMatchesURL:(id)arg1;	// IMP=0x00100000003921b0
- (_Bool)_httpOnlyMatchesURL:(id)arg1;	// IMP=0x0010000000392162
- (_Bool)_pathMatchesURL:(id)arg1;	// IMP=0x0010000000391f85
- (_Bool)_domainMatchesURL:(id)arg1;	// IMP=0x0010000000391e74
@property(readonly, nonatomic, getter=ams_isExpired) _Bool ams_expired;
@property(readonly, nonatomic, getter=ams_isDeleted) _Bool ams_deleted;
@property(readonly, nonatomic, getter=ams_isCookieValidForBag) _Bool ams_cookieValidForBag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
