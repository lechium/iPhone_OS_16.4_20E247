//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface UITableViewCellContentView : UIView
{
    struct {
        unsigned int edgesForOverridingDefaultLayoutMargins:4;
    } _contentViewFlags;	// 144 = 0x90
    struct NSDirectionalEdgeInsets _overriddenDefaultLayoutMargins;	// 152 = 0x98
}

+ (id)classFallbacksForKeyedArchiver;	// IMP=0x0060000001065baf
@property(nonatomic, getter=_overriddenDefaultLayoutMargins, setter=_setOverriddenDefaultLayoutMargins:) struct NSDirectionalEdgeInsets overriddenDefaultLayoutMargins; // @synthesize overriddenDefaultLayoutMargins=_overriddenDefaultLayoutMargins;
- (struct UIEdgeInsets)_concreteDefaultLayoutMargins;	// IMP=0x0000000001065ed1
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;	// IMP=0x0000000001065d90
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001065cd0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001065c84
- (void)_tableViewCellContentViewCommonSetup;	// IMP=0x0000000001065bcf

@end

