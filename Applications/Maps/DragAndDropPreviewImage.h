//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIBezierPath, UIDragPreview, UIImage;

@interface DragAndDropPreviewImage : NSObject
{
    _Bool _nightMode;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    UIBezierPath *_visiblePath;	// 24 = 0x18
    double _cornerRadius;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000bcdad2
- (void);	// IMP=0x0010000000bcdac7
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIBezierPath *visiblePath; // @synthesize visiblePath=_visiblePath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool nightMode; // @synthesize nightMode=_nightMode;
- (id)targetedDragPreviewWithTarget:(id)arg1;	// IMP=0x0010000000bcd974
@property(readonly, nonatomic) UIDragPreview *dragPreview;

@end

