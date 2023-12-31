//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class SSAccount;

@interface LogoutOperation : ISOperation
{
    SSAccount *_account;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000001abeac
- (void)_sendLogoutRequest;	// IMP=0x00100000001abb9c
- (id)_sbsyncData;	// IMP=0x00100000001abb94
- (void)_disableBookkeeper;	// IMP=0x00100000001ab7d5
- (void)_disableAutomaticDownloadKinds;	// IMP=0x00100000001ab741
- (id)_copyAuthenticationContext;	// IMP=0x00100000001ab6ca
- (void)run;	// IMP=0x00100000001ab67d
@property(readonly) SSAccount *account;
- (id)initWithAccount:(id)arg1;	// IMP=0x00100000001ab5be

@end

