//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface _MPDownloadProgressRingView : UIView
{
    double _progress;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x00600000001762a6
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)_updateShapePath;	// IMP=0x0000000000176055
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000000175f8c
- (void)tintColorDidChange;	// IMP=0x0000000000175edd
- (void)layoutSubviews;	// IMP=0x0000000000175e9c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000175d42

@end
