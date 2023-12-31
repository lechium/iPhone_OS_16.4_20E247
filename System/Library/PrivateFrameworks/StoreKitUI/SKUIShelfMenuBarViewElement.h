//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SKUIMenuBarViewElementConfiguration;

__attribute__((visibility("hidden")))
@interface SKUIShelfMenuBarViewElement
{
    NSArray *_focusedViewElements;	// 8 = 0x8
    NSArray *_regularViewElements;	// 16 = 0x10
    SKUIMenuBarViewElementConfiguration *_configuration;	// 24 = 0x18
}

+ (id)supportedFeatures;	// IMP=0x001000000010d76b
- (void).cxx_destruct;	// IMP=0x000000000010e1d2
@property(retain, nonatomic) SKUIMenuBarViewElementConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_reloadMenuItems;	// IMP=0x000000000010daac
- (id)focusedViewElementForMenuItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010da8f
- (id)regularViewElementForMenuItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000010da72
- (void)_menuBarViewElementConfigurationRequestsReload:(id)arg1;	// IMP=0x000000000010da51
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010d907
- (unsigned long long)elementType;	// IMP=0x000000000010d8fc
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x000000000010d851
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x000000000010d59f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

