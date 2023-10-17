//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface _UIDragDestinationIndicatorView : UIView
{
    _Bool _isSourceList;	// 144 = 0x90
    NSIndexPath *_currentIndexPath;	// 152 = 0x98
    double _scaleFactor;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000011fd454
@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) _Bool isSourceList; // @synthesize isSourceList=_isSourceList;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000011fd0d1
- (void)positionHorizontallyCenteredInFrame:(struct CGRect)arg1;	// IMP=0x00000000011fd033
- (void)positionOnCellFrame:(struct CGRect)arg1 above:(_Bool)arg2;	// IMP=0x00000000011fcfaf
- (void)positionVerticallyCenteredInFrame:(struct CGRect)arg1;	// IMP=0x00000000011fcef5
- (id)initWithSourceListStyle:(_Bool)arg1;	// IMP=0x00000000011fce29

@end
