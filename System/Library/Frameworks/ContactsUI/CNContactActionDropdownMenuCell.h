//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContactActionDropdownMenuButton, UIContextMenuInteraction;

__attribute__((visibility("hidden")))
@interface CNContactActionDropdownMenuCell
{
    CDUnknownBlockType _menuProvider;	// 8 = 0x8
    CNContactActionDropdownMenuButton *_button;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a648b
@property(retain, nonatomic) CNContactActionDropdownMenuButton *button; // @synthesize button=_button;
@property(copy, nonatomic) CDUnknownBlockType menuProvider; // @synthesize menuProvider=_menuProvider;
- (void)prepareForReuse;	// IMP=0x00000000000a63d7
@property(readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000a5e03

@end
