//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextSelectionRect.h"

__attribute__((visibility("hidden")))
@interface _UITextSelectionCaretRect : UITextSelectionRect
{
    struct CGRect _rect;	// 8 = 0x8
}

+ (id)selectionRectWithRect:(struct CGRect)arg1;	// IMP=0x00600000011e40cc
- (_Bool)isVertical;	// IMP=0x00000000011e413b
- (_Bool)containsEnd;	// IMP=0x00000000011e4133
- (_Bool)containsStart;	// IMP=0x00000000011e412b
- (long long)writingDirection;	// IMP=0x00000000011e411e
- (struct CGRect)rect;	// IMP=0x00000000011e40fe

@end
