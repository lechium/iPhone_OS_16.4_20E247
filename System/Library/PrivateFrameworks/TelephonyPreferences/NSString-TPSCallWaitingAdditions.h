//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TPSCallWaitingAdditions)
+ (id)tps_stringWithTPSCallWaitingState:(long long)arg1;	// IMP=0x0020000000005241
+ (id)tps_stringWithTPSEncryptedIdentityType:(long long)arg1;	// IMP=0x002000000000593a
+ (id)tps_ctStringWithTPSEncryptedIdentityType:(long long)arg1;	// IMP=0x0020000000005904
+ (id)tps_stringWithCTPhoneBookName:(int)arg1;	// IMP=0x0020000000008e0e
+ (id)tps_stringWithTPSCallingLineIdRestrictionState:(long long)arg1;	// IMP=0x0020000000008e5e
+ (id)tps_stringWithTPSCallForwardingServiceType:(long long)arg1;	// IMP=0x002000000000dc7b
@property(readonly, nonatomic) long long tps_encryptedIdentityType;
@end
