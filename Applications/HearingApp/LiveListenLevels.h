//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface LiveListenLevels : UIView
{
    int _meterDots;	// 8 = 0x8
    NSMutableArray *_levels;	// 16 = 0x10
    double _dotSize;	// 24 = 0x18
    double _dotSpacing;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000026cb
@property(nonatomic) double dotSpacing; // @synthesize dotSpacing=_dotSpacing;
@property(nonatomic) double dotSize; // @synthesize dotSize=_dotSize;
@property(nonatomic) int meterDots; // @synthesize meterDots=_meterDots;
@property(retain, nonatomic) NSMutableArray *levels; // @synthesize levels=_levels;
- (void)updateLevel:(double)arg1;	// IMP=0x00100000000024cf
- (void)layoutSubviews;	// IMP=0x0010000000002181
- (id)initWithFrame:(struct CGRect)arg1 inCompact:(_Bool)arg2;	// IMP=0x0010000000001db7

@end

