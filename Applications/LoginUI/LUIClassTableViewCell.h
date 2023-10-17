//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class LKClass, LUIUserAvatarView, NSMutableDictionary, UIView;

@interface LUIClassTableViewCell : UITableViewCell
{
    _Bool _isSeparatorViewHidden;	// 8 = 0x8
    LKClass *_classInfo;	// 16 = 0x10
    UIView *_separatorView;	// 24 = 0x18
    NSMutableDictionary *_contactByIdentifier;	// 32 = 0x20
    NSMutableDictionary *_instructorByIdentifier;	// 40 = 0x28
    LUIUserAvatarView *_avatarView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000000e57b
@property(retain, nonatomic) LUIUserAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSMutableDictionary *instructorByIdentifier; // @synthesize instructorByIdentifier=_instructorByIdentifier;
@property(retain, nonatomic) NSMutableDictionary *contactByIdentifier; // @synthesize contactByIdentifier=_contactByIdentifier;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic, setter=setSeparatorViewHidden:) _Bool isSeparatorViewHidden; // @synthesize isSeparatorViewHidden=_isSeparatorViewHidden;
@property(retain, nonatomic) LKClass *classInfo; // @synthesize classInfo=_classInfo;
- (void)_removeImageDataObserversFromContacts:(id)arg1;	// IMP=0x001000000000e1d5
- (void)_addImageDataObserversToContacts:(id)arg1;	// IMP=0x001000000000e07b
- (id)_contactsForInstructors:(id)arg1;	// IMP=0x001000000000dcc8
- (id)_instructorsInClass:(id)arg1;	// IMP=0x001000000000dad1
- (void)disableCellForUserInteraction;	// IMP=0x001000000000d915
- (void)enableCellForUserInteraction;	// IMP=0x001000000000d872
- (void)updateImage;	// IMP=0x001000000000d5f3
- (void)updateName;	// IMP=0x001000000000d430
- (id)_userForObject:(id)arg1;	// IMP=0x001000000000d2cc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000000d267
- (void)layoutSubviews;	// IMP=0x001000000000cbc4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000000c8a4
- (void)dealloc;	// IMP=0x001000000000c7d6

@end
