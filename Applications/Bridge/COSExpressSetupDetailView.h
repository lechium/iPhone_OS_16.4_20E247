//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIStackView;

@interface COSExpressSetupDetailView : UIView
{
    NSArray *_sections;	// 8 = 0x8
    UIStackView *_sectionStackView;	// 16 = 0x10
}

+ (id)testSections;	// IMP=0x00400000000c3db9
- (void).cxx_destruct;	// IMP=0x00200000000c4643
@property(retain, nonatomic) UIStackView *sectionStackView; // @synthesize sectionStackView=_sectionStackView;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void)_setupSections;	// IMP=0x00100000000c41a6
- (id)initWithSections:(id)arg1;	// IMP=0x00100000000c4128

@end
