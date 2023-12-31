//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppMenuBarDocument, NSArray, NSString, SKUIMenuItemViewElement;
@protocol SKUIMenuBarViewElementConfigurationDelegate, _SKUIMenuBarViewElementConfigurationReloadDelegate;

__attribute__((visibility("hidden")))
@interface SKUIMenuBarViewElementConfiguration : NSObject
{
    IKAppMenuBarDocument *_menuBarDocument;	// 8 = 0x8
    long long _menuBarStyle;	// 16 = 0x10
    NSArray *_menuItemViewElements;	// 24 = 0x18
    _Bool _scrollEnabled;	// 32 = 0x20
    SKUIMenuItemViewElement *_selectedMenuItemViewElement;	// 40 = 0x28
    _Bool _needsReload;	// 48 = 0x30
    id <SKUIMenuBarViewElementConfigurationDelegate> _delegate;	// 56 = 0x38
    id <_SKUIMenuBarViewElementConfigurationReloadDelegate> _reloadDelegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000a50a8
@property(nonatomic, getter=_reloadDelegate, setter=_setReloadDelegate:) __weak id <_SKUIMenuBarViewElementConfigurationReloadDelegate> reloadDelegate; // @synthesize reloadDelegate=_reloadDelegate;
@property(nonatomic, getter=_needsReload, setter=_setNeedsReload:) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(readonly, nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) __weak id <SKUIMenuBarViewElementConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_reloadWithMenuBarStyle:(long long)arg1 menuItemViewElements:(id)arg2 scrollEnabled:(_Bool)arg3;	// IMP=0x00000000000a5007
- (void)_ensureDataLoaded;	// IMP=0x00000000000a4fa1
- (void)contentWillAppearForMenuItemAtIndex:(unsigned long long)arg1 withEntityValueProvider:(id)arg2 clientContext:(id)arg3;	// IMP=0x00000000000a4da0
- (unsigned long long)indexOfMenuItemViewElement:(id)arg1;	// IMP=0x00000000000a4d35
- (id)documentOptionsForMenuItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a4cc1
- (id)documentOptionsForEntityUniqueIdentifier:(id)arg1;	// IMP=0x00000000000a4c5b
- (id)documentForMenuItemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a4be7
- (id)documentForEntityUniqueIdentifier:(id)arg1;	// IMP=0x00000000000a4b81
@property(readonly, nonatomic) SKUIMenuItemViewElement *selectedMenuItemViewElement; // @synthesize selectedMenuItemViewElement=_selectedMenuItemViewElement;
@property(readonly, nonatomic) unsigned long long numberOfMenuItems;
@property(readonly, nonatomic) long long menuBarStyle;
- (void)menuBarDocument:(id)arg1 didSelectMenuItem:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000a4a0d
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForMenuItem:(id)arg2;	// IMP=0x00000000000a4944
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForEntityWithUniqueIdentifier:(id)arg2;	// IMP=0x00000000000a48bb
- (id)_initWithMenuBarDocument:(id)arg1;	// IMP=0x00000000000a4810

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

