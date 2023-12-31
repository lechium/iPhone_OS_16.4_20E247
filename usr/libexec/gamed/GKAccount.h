//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSString;

@interface GKAccount : NSObject
{
    ACAccount *_internalAccount;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000024342f
@property(readonly, retain, nonatomic) ACAccount *internalAccount; // @synthesize internalAccount=_internalAccount;
- (_Bool)isEnabledForDataClass:(id)arg1;	// IMP=0x001000000024340f
@property(readonly, retain, nonatomic) NSString *authToken; // @dynamic authToken;
@property(readonly, retain, nonatomic) NSString *username; // @dynamic username;
@property(readonly, retain, nonatomic) NSString *personID; // @dynamic personID;
- (id)initWithInternalAccount:(id)arg1;	// IMP=0x0010000000243362

@end

