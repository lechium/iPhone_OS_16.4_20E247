//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIBezierPath;

@interface COSTargetOutlineView : UIView
{
    UIBezierPath *_outlinePath;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000fb2b7
@property(retain, nonatomic) UIBezierPath *outlinePath; // @synthesize outlinePath=_outlinePath;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00100000000fb1ef
- (id)initWithOutlinePath:(id)arg1;	// IMP=0x00100000000fb13d

@end
