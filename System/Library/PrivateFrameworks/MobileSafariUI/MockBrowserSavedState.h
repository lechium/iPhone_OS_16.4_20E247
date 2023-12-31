//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/_SFBrowserSavedState.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MockBrowserSavedState : _SFBrowserSavedState
{
    unsigned long long _tabsCount;	// 8 = 0x8
    NSString *_initalURLString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000fae16
@property(copy, nonatomic) NSString *initalURLString; // @synthesize initalURLString=_initalURLString;
@property(nonatomic) unsigned long long tabsCount; // @synthesize tabsCount=_tabsCount;
- (_Bool)activeDocumentIsValidForBrowserControllerWithUUID:(id)arg1;	// IMP=0x00000000000fadca
- (id)savedTabsStateForBrowserControllerWithUUID:(id)arg1 initialURLString:(id)arg2;	// IMP=0x00000000000faa7f
- (id)savedTabsStateForBrowserControllerWithUUID:(id)arg1;	// IMP=0x00000000000faa52

@end

