//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, NSString;

__attribute__((visibility("hidden")))
@interface AMSBagFixedAccountProvider : NSObject
{
    ACAccount *_account;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000186004
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *identity;
@property(readonly, nonatomic) _Bool bagLoadShouldUpdateAccountProperties;
- (id)bagStorefrontForAccountMediaType:(id)arg1;	// IMP=0x0000000000185ee2
- (id)bagAccountForAccountMediaType:(id)arg1;	// IMP=0x0000000000185ed0
- (_Bool)associatedAccountIsEqualToAccount:(id)arg1 forMediaType:(id)arg2;	// IMP=0x0000000000185e1c
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000000185db1

@end

