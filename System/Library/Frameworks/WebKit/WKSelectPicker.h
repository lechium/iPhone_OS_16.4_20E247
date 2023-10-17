//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKSelectPicker : NSObject
{
    WKContentView *_view;	// 8 = 0x8
    struct CGPoint _interactionPoint;	// 16 = 0x10
    struct RetainPtr<UIMenu> _selectMenu;	// 32 = 0x20
    struct RetainPtr<UIContextMenuInteraction> _selectContextMenuInteraction;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x000000000047f0d0
- (void).cxx_destruct;	// IMP=0x000000000047f089
- (_Bool)selectFormAccessoryHasCheckedItemAtRow:(long long)arg1;	// IMP=0x000000000047f056
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;	// IMP=0x000000000047effe
- (void)showSelectPicker;	// IMP=0x000000000047efb9
- (void)ensureContextMenuInteraction;	// IMP=0x000000000047ef4e
- (void)removeContextMenuInteraction;	// IMP=0x000000000047eec0
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000047ed5f
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000047ec19
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000047eb0b
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x000000000047eacf
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;	// IMP=0x000000000047eab1
- (id)actionForOptionIndex:(long long)arg1;	// IMP=0x000000000047e8da
- (id)actionForOptionItem:(const void *)arg1 withIndex:(long long)arg2;	// IMP=0x000000000047e7ee
- (id)createMenu;	// IMP=0x000000000047e3c2
- (void)didSelectOptionIndex:(long long)arg1;	// IMP=0x000000000047e34b
- (void)dealloc;	// IMP=0x000000000047e30d
- (void)controlEndEditing;	// IMP=0x000000000047e2d3
- (void)controlBeginEditing;	// IMP=0x000000000047e1dc
- (id)controlView;	// IMP=0x000000000047e1d4
- (id)initWithView:(id)arg1;	// IMP=0x000000000047e157

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
