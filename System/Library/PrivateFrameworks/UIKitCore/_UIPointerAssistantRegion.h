//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPointerRegion.h"

@class UIView, _UIAssistantEntry;

__attribute__((visibility("hidden")))
@interface _UIPointerAssistantRegion : UIPointerRegion
{
    _Bool _selected;	// 8 = 0x8
    UIView *_targetView;	// 16 = 0x10
    _UIAssistantEntry *_assistant;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000400236
- (id)description;	// IMP=0x0000000000400101
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003fff91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003fff00

@end

