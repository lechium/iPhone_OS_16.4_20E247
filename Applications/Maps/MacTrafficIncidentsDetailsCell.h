//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKTableViewCell.h>

@class MacTrafficIncidentsDetailsCellModel, UILabel;

@interface MacTrafficIncidentsDetailsCell : MKTableViewCell
{
    UILabel *_dateLabel;	// 8 = 0x8
    MacTrafficIncidentsDetailsCellModel *_cellModel;	// 16 = 0x10
}

+ (id)reuseIdentifier;	// IMP=0x00400000005fa14b
- (void).cxx_destruct;	// IMP=0x00200000005fa845
@property(retain, nonatomic) MacTrafficIncidentsDetailsCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void)_updateLabels;	// IMP=0x00100000005fa76e
- (void)configureWithCellModel:(id)arg1;	// IMP=0x00100000005fa717
- (void)_createConstraints;	// IMP=0x00100000005fa381
- (void)_createSubviews;	// IMP=0x00100000005fa1b6
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000005fa155

@end
