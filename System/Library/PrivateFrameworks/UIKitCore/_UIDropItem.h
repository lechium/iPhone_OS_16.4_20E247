//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIDragItem.h"

@class NSItemProvider;

__attribute__((visibility("hidden")))
@interface _UIDropItem : UIDragItem
{
    UIDragItem *_localDragItem;	// 128 = 0x80
    NSItemProvider *_dropItemProvider;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000639bd9
@property(retain, nonatomic, getter=_dropItemProvider, setter=_setDropItemProvider:) NSItemProvider *dropItemProvider; // @synthesize dropItemProvider=_dropItemProvider;
@property(retain, nonatomic, getter=_localDragItem, setter=_setLocalDragItem:) UIDragItem *localDragItem; // @synthesize localDragItem=_localDragItem;
- (void)_setPrivateLocalContext:(id)arg1;	// IMP=0x0000000000639b1d
- (id)_privateLocalContext;	// IMP=0x0000000000639acd
- (void)setLocalObject:(id)arg1;	// IMP=0x0000000000639a5b
- (id)localObject;	// IMP=0x0000000000639a0b
- (id)itemProvider;	// IMP=0x00000000006399b2

@end

