//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAccount.h>

@class NSString;

@interface CNAccount (UIAdditions)
+ (_Bool)_cnui_isFacebookACAccount:(id)arg1;	// IMP=0x00200000001ea09c
+ (id)_cnui_displayNameForACAccount:(id)arg1;	// IMP=0x00200000001e9f92
+ (id)_cnui_displayNameForLocal;	// IMP=0x00200000001e9f3b
+ (_Bool)_cnui_requestRefreshWithUserAction:(_Bool)arg1;	// IMP=0x00200000001e9e37
+ (void)_cnui_canRequestRefreshWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00200000001e9d7c
+ (id)_cnui_accountStore;	// IMP=0x00200000001e9d63
@property(readonly, nonatomic) NSString *_cnui_displayName;
@end

