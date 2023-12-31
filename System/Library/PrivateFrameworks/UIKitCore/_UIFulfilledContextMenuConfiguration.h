//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIAction, UIMenu, UIResponder, UIViewController;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface _UIFulfilledContextMenuConfiguration : NSObject
{
    id <NSCopying> _identifier;	// 8 = 0x8
    id _internalIdentifier;	// 16 = 0x10
    UIViewController *_previewViewController;	// 24 = 0x18
    NSArray *_accessoryViews;	// 32 = 0x20
    UIMenu *_menu;	// 40 = 0x28
    UIAction *_previewAction;	// 48 = 0x30
    unsigned long long _representedItemCount;	// 56 = 0x38
    unsigned long long _badgeCount;	// 64 = 0x40
    UIResponder *_firstResponderTarget;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000001340756
@property(nonatomic) __weak UIResponder *firstResponderTarget; // @synthesize firstResponderTarget=_firstResponderTarget;
@property(nonatomic) unsigned long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(nonatomic) unsigned long long representedItemCount; // @synthesize representedItemCount=_representedItemCount;
@property(copy, nonatomic) UIAction *previewAction; // @synthesize previewAction=_previewAction;
@property(copy, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(retain, nonatomic) id internalIdentifier; // @synthesize internalIdentifier=_internalIdentifier;
@property(copy, nonatomic) id <NSCopying> identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool isMultiItemMenu;
- (_Bool)isPresentable;	// IMP=0x00000000013405ae

@end

