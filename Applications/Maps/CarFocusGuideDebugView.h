//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;

@interface CarFocusGuideDebugView
{
    unsigned long long _direction;	// 8 = 0x8
    UILabel *_directionLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000006a10cc
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00100000006a108b
- (id)_colorForDirection:(unsigned long long)arg1;	// IMP=0x00100000006a1051
- (void)_updateColors;	// IMP=0x00100000006a0ed4
- (id)initWithDirection:(unsigned long long)arg1;	// IMP=0x00100000006a0bac

@end

