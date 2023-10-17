//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class PSSpecifier, PSUIDataUsageCategorySpecifier;

__attribute__((visibility("hidden")))
@interface PSUIDataUsageCategoryListController : PSListController
{
    PSUIDataUsageCategorySpecifier *_parentSpecifier;	// 192 = 0xc0
    PSSpecifier *_spinnerSpecifier;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000000002c61c
@property(retain, nonatomic) PSSpecifier *spinnerSpecifier; // @synthesize spinnerSpecifier=_spinnerSpecifier;
@property(retain, nonatomic) PSUIDataUsageCategorySpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
- (_Bool)shouldReloadSpecifiersOnResume;	// IMP=0x000000000002c5ca
- (id)specifiers;	// IMP=0x000000000002c318
- (id)init;	// IMP=0x000000000002c1a3

@end
