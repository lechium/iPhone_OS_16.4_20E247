//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface PUCloudSharedBackdropView : UIView
{
    UIView *_backdropView;	// 8 = 0x8
    _Bool _isMask;	// 16 = 0x10
    _Bool _hasRoundedCorners;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x0000000000117e60
@property(nonatomic) _Bool hasRoundedCorners; // @synthesize hasRoundedCorners=_hasRoundedCorners;
- (void)layoutSubviews;	// IMP=0x0000000000117db6
- (id)initWithFrame:(struct CGRect)arg1 asMask:(_Bool)arg2;	// IMP=0x0000000000117c47
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000117c33
- (id)init;	// IMP=0x0000000000117bff

@end
