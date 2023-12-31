//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderTableViewDataSource : NSObject
{
    UITableView *_tableView;	// 8 = 0x8
    NSArray *_identityProviders;	// 16 = 0x10
    unsigned long long _additionalProvidersMode;	// 24 = 0x18
    NSString *_requestedStorefrontCountryCode;	// 32 = 0x20
    NSArray *_tvProviderSupportedStorefronts;	// 40 = 0x28
    NSArray *_providerSections;	// 48 = 0x30
    NSArray *_storefrontSections;	// 56 = 0x38
    NSDictionary *_destinationsBySectionIndexTitle;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000641be
@property(copy, nonatomic) NSDictionary *destinationsBySectionIndexTitle; // @synthesize destinationsBySectionIndexTitle=_destinationsBySectionIndexTitle;
@property(copy, nonatomic) NSArray *storefrontSections; // @synthesize storefrontSections=_storefrontSections;
@property(copy, nonatomic) NSArray *providerSections; // @synthesize providerSections=_providerSections;
@property(copy, nonatomic) NSArray *tvProviderSupportedStorefronts; // @synthesize tvProviderSupportedStorefronts=_tvProviderSupportedStorefronts;
@property(nonatomic) NSString *requestedStorefrontCountryCode; // @synthesize requestedStorefrontCountryCode=_requestedStorefrontCountryCode;
@property(nonatomic) unsigned long long additionalProvidersMode; // @synthesize additionalProvidersMode=_additionalProvidersMode;
@property(copy, nonatomic) NSArray *identityProviders; // @synthesize identityProviders=_identityProviders;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000063d9a
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000063c28
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000063b59
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x0000000000063aba
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000000000638f8
- (void)setNumberOfLinesForCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000638b6
- (void)_scrollToTableHeaderView;	// IMP=0x00000000000637d6
- (id)_textColorForRowAtIndexPath:(id)arg1;	// IMP=0x00000000000636fd
- (long long)_textAlignmentForRowAtIndexPath:(id)arg1;	// IMP=0x000000000006367c
- (id)_titleForRowAtIndexPath:(id)arg1;	// IMP=0x00000000000635ae
- (long long)_cellStyleForRowAtIndexPath:(id)arg1;	// IMP=0x0000000000063578
- (id)_cellReuseIdentifierForRowAtIndexPath:(id)arg1;	// IMP=0x0000000000063535
- (id)_additionalProvidersRowTitle;	// IMP=0x0000000000063449
- (_Bool)hasStorefrontOrIdentityProviderAtIndexPath:(id)arg1;	// IMP=0x00000000000633dc
- (id)storefrontAtIndexPath:(id)arg1;	// IMP=0x00000000000632f4
- (id)identityProviderForRowAtIndexPath:(id)arg1;	// IMP=0x00000000000631cf
- (unsigned long long)_minimumProviderCountForIndexes;	// IMP=0x0000000000063022
- (id)init;	// IMP=0x000000000006214c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

