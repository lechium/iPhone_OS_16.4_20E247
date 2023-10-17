//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@class NSArray, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VSJSResponsePayload : IKJSObject
{
    _Bool _synchronizable;	// 8 = 0x8
    NSString *_authN;	// 16 = 0x10
    NSString *_username;	// 24 = 0x18
    NSDate *_expirationDate;	// 32 = 0x20
    NSString *_userMetadata;	// 40 = 0x28
    NSString *_logout;	// 48 = 0x30
    NSArray *_userChannelList;	// 56 = 0x38
    NSString *_authenticationScheme;	// 64 = 0x40
    NSString *_statusCode;	// 72 = 0x48
    NSNumber *_expectedAction;	// 80 = 0x50
    NSArray *_subscriptions;	// 88 = 0x58
    NSArray *_clearSubscriptions;	// 96 = 0x60
    NSArray *_userAccounts;	// 104 = 0x68
    NSString *_appBundleIdentifier;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000002e0d4
@property(nonatomic, getter=isSynchronizable) _Bool synchronizable; // @synthesize synchronizable=_synchronizable;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(copy, nonatomic) NSArray *userAccounts; // @synthesize userAccounts=_userAccounts;
@property(copy, nonatomic) NSArray *clearSubscriptions; // @synthesize clearSubscriptions=_clearSubscriptions;
@property(copy, nonatomic) NSArray *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(copy, nonatomic) NSNumber *expectedAction; // @synthesize expectedAction=_expectedAction;
@property(copy, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic) NSString *authenticationScheme; // @synthesize authenticationScheme=_authenticationScheme;
@property(copy, nonatomic) NSArray *userChannelList; // @synthesize userChannelList=_userChannelList;
@property(copy, nonatomic) NSString *logout; // @synthesize logout=_logout;
@property(copy, nonatomic) NSString *userMetadata; // @synthesize userMetadata=_userMetadata;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *authN; // @synthesize authN=_authN;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002dcdf
- (id)init;	// IMP=0x000000000002dc08

@end
