//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKTableViewCell.h>

@class DeclineAcceptButtonsView, MISSING_TYPE, TrafficIncidentReport, TrafficIncidentsDateFormatter, TrafficIncidentsDescriptionView, UIImageView, UIStackView, UIView, VKTrafficIncidentFeature, _MKUILabel;
@protocol TrafficIncidentsOverviewCellDelegate;

@interface TrafficIncidentsOverviewCell : MKTableViewCell
{
    _Bool _showVotingButtons;	// 8 = 0x8
    VKTrafficIncidentFeature *_incident;	// 16 = 0x10
    TrafficIncidentReport *_incidentReport;	// 24 = 0x18
    id <TrafficIncidentsOverviewCellDelegate> _delegate;	// 32 = 0x20
    UIStackView *_containerStackView;	// 40 = 0x28
    TrafficIncidentsDescriptionView *_detailsDescriptionView;	// 48 = 0x30
    MISSING_TYPE *_detailsView;	// 56 = 0x38
    UIImageView *_detailsImageView;	// 64 = 0x40
    _MKUILabel *_detailsEndLabel;	// 72 = 0x48
    TrafficIncidentsDateFormatter *_formatter;	// 80 = 0x50
    UIStackView *_detailsStackView;	// 88 = 0x58
    DeclineAcceptButtonsView *_reportingButtonsView;	// 96 = 0x60
    UIStackView *_reportingStackView;	// 104 = 0x68
    _MKUILabel *_detailsUpdateLabel;	// 112 = 0x70
}

+ (id)reuseIdentifier;	// IMP=0x0040000000aa6a1d
- (void).cxx_destruct;	// IMP=0x0020000000aa8ba6
@property(retain, nonatomic) _MKUILabel *detailsUpdateLabel; // @synthesize detailsUpdateLabel=_detailsUpdateLabel;
@property(retain, nonatomic) UIStackView *reportingStackView; // @synthesize reportingStackView=_reportingStackView;
@property(retain, nonatomic) DeclineAcceptButtonsView *reportingButtonsView; // @synthesize reportingButtonsView=_reportingButtonsView;
@property(retain, nonatomic) UIStackView *detailsStackView; // @synthesize detailsStackView=_detailsStackView;
@property(retain, nonatomic) TrafficIncidentsDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) _MKUILabel *detailsEndLabel; // @synthesize detailsEndLabel=_detailsEndLabel;
@property(retain, nonatomic) UIImageView *detailsImageView; // @synthesize detailsImageView=_detailsImageView;
@property(retain, nonatomic) UIView *detailsView; // @synthesize detailsView=_detailsView;
@property(retain, nonatomic) TrafficIncidentsDescriptionView *detailsDescriptionView; // @synthesize detailsDescriptionView=_detailsDescriptionView;
@property(retain, nonatomic) UIStackView *containerStackView; // @synthesize containerStackView=_containerStackView;
@property(nonatomic) __weak id <TrafficIncidentsOverviewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showVotingButtons; // @synthesize showVotingButtons=_showVotingButtons;
@property(retain, nonatomic) TrafficIncidentReport *incidentReport; // @synthesize incidentReport=_incidentReport;
@property(retain, nonatomic) VKTrafficIncidentFeature *incident; // @synthesize incident=_incident;
- (void)_detailsUpdateLabels;	// IMP=0x0010000000aa7de3
- (void)_setupConstraints;	// IMP=0x0010000000aa751c
- (id)_dateLabel;	// IMP=0x0010000000aa747c
- (void)_setupViews;	// IMP=0x0010000000aa6c45
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000aa6a2a

@end
