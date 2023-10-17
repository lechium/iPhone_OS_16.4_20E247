//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDPane : NSObject
{
    double mXSplitPosition;	// 8 = 0x8
    double mYSplitPosition;	// 16 = 0x10
    EDReference *mTopLeftCell;	// 24 = 0x18
    int mActivePane;	// 32 = 0x20
    int mPaneState;	// 36 = 0x24
}

+ (id)pane;	// IMP=0x006000000014ad6f
- (void).cxx_destruct;	// IMP=0x00000000003a36bd
- (id)description;	// IMP=0x00000000003a367f
- (void)setPaneState:(int)arg1;	// IMP=0x00000000003a3676
- (int)paneState;	// IMP=0x00000000003a366d
- (void)setActivePane:(int)arg1;	// IMP=0x000000000014adcb
- (int)activePane;	// IMP=0x00000000003a3664
- (void)setTopLeftCell:(id)arg1;	// IMP=0x000000000014adea
- (id)topLeftCell;	// IMP=0x00000000003a3656
- (void)setYSplitPosition:(double)arg1;	// IMP=0x000000000014addf
- (double)ySplitPosition;	// IMP=0x00000000003a364b
- (void)setXSplitPosition:(double)arg1;	// IMP=0x000000000014add4
- (double)xSplitPosition;	// IMP=0x00000000003a3640
- (id)init;	// IMP=0x000000000014ad89

@end
