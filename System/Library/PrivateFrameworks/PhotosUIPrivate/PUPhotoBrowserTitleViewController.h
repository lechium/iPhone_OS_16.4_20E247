//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDateComponentsFormatter, NSString, PLDateRangeFormatter, UIColor, UITapGestureRecognizer, UIView;
@protocol PUPhotoBrowserTitleViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoBrowserTitleViewController : NSObject
{
    struct {
        _Bool respondsToTapped;
    } _delegateFlags;	// 8 = 0x8
    _Bool _tappable;	// 9 = 0x9
    _Bool _usingCompactTitleView;	// 10 = 0xa
    _Bool __isPerformingChanges;	// 11 = 0xb
    _Bool __isUpdating;	// 12 = 0xc
    _Bool __needsUpdateDayAndTimeDescriptions;	// 13 = 0xd
    _Bool __needsUpdatePlayClockDescription;	// 14 = 0xe
    _Bool __needsUpdateLabels;	// 15 = 0xf
    _Bool __needsUpdateGestureRecognizers;	// 16 = 0x10
    UIView *_view;	// 24 = 0x18
    id <PUPhotoBrowserTitleViewControllerDelegate> _delegate;	// 32 = 0x20
    NSString *_geoDescription;	// 40 = 0x28
    NSDate *_creationDate;	// 48 = 0x30
    PLDateRangeFormatter *__dayFormatter;	// 56 = 0x38
    PLDateRangeFormatter *__timeFormatter;	// 64 = 0x40
    NSDateComponentsFormatter *__playClockFormatter;	// 72 = 0x48
    NSString *__dayDescription;	// 80 = 0x50
    NSString *__timeDescription;	// 88 = 0x58
    NSString *__playClockDescription;	// 96 = 0x60
    UITapGestureRecognizer *__tapGestureRecognizer;	// 104 = 0x68
    CDStruct_1b6d18a9 _currentPlaybackTime;	// 112 = 0x70
    CDStruct_1b6d18a9 _playbackDuration;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000030838f
@property(retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(retain, nonatomic, setter=_setPlayClockDescription:) NSString *_playClockDescription; // @synthesize _playClockDescription=__playClockDescription;
@property(retain, nonatomic, setter=_setTimeDescription:) NSString *_timeDescription; // @synthesize _timeDescription=__timeDescription;
@property(retain, nonatomic, setter=_setDayDescription:) NSString *_dayDescription; // @synthesize _dayDescription=__dayDescription;
@property(readonly, nonatomic) NSDateComponentsFormatter *_playClockFormatter; // @synthesize _playClockFormatter=__playClockFormatter;
@property(readonly, nonatomic) PLDateRangeFormatter *_timeFormatter; // @synthesize _timeFormatter=__timeFormatter;
@property(readonly, nonatomic) PLDateRangeFormatter *_dayFormatter; // @synthesize _dayFormatter=__dayFormatter;
@property(nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers; // @synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers;
@property(nonatomic, setter=_setNeedsUpdateLabels:) _Bool _needsUpdateLabels; // @synthesize _needsUpdateLabels=__needsUpdateLabels;
@property(nonatomic, setter=_setNeedsUpdatePlayClockDescription:) _Bool _needsUpdatePlayClockDescription; // @synthesize _needsUpdatePlayClockDescription=__needsUpdatePlayClockDescription;
@property(nonatomic, setter=_setNeedsUpdateDayAndTimeDescriptions:) _Bool _needsUpdateDayAndTimeDescriptions; // @synthesize _needsUpdateDayAndTimeDescriptions=__needsUpdateDayAndTimeDescriptions;
@property(nonatomic, setter=_setUpdating:) _Bool _isUpdating; // @synthesize _isUpdating=__isUpdating;
@property(nonatomic, setter=_setPerformingChanges:) _Bool _isPerformingChanges; // @synthesize _isPerformingChanges=__isPerformingChanges;
@property(nonatomic) CDStruct_1b6d18a9 playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(nonatomic) CDStruct_1b6d18a9 currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *geoDescription; // @synthesize geoDescription=_geoDescription;
@property(nonatomic, getter=isUsingCompactTitleView) _Bool usingCompactTitleView; // @synthesize usingCompactTitleView=_usingCompactTitleView;
@property(nonatomic, getter=isTappable) _Bool tappable; // @synthesize tappable=_tappable;
@property(nonatomic) __weak id <PUPhotoBrowserTitleViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void)_handleTapGestureRecognizer:(id)arg1;	// IMP=0x00000000003081d7
- (void)_updateGestureRecognizersIfNeeded;	// IMP=0x00000000003080e6
- (void)_invalidateGestureRecognizers;	// IMP=0x00000000003080b3
- (void)_updateLabelsIfNeeded;	// IMP=0x0000000000307c71
- (void)_invalidateLabels;	// IMP=0x0000000000307c3e
- (void)_updatePlayClockDescriptionIfNeeded;	// IMP=0x0000000000307a74
- (void)_invalidatePlayClockDescription;	// IMP=0x0000000000307a41
- (void)_updateDayAndTimeDescriptionsIfNeeded;	// IMP=0x000000000030790d
- (void)_invalidateDayAndTimeDescriptions;	// IMP=0x00000000003078da
- (void)_setNeedsUpdate;	// IMP=0x000000000030782e
- (_Bool)_needsUpdate;	// IMP=0x00000000003077cd
- (void)_updateIfNeeded;	// IMP=0x00000000003076bb
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000003075c4
- (void)_assertInsideUpdate;	// IMP=0x000000000030752c
- (void)_assertInsideChangeBlock;	// IMP=0x0000000000307494
- (void)_dateFormatterChanged:(id)arg1;	// IMP=0x0000000000307448
@property(retain, nonatomic) UIColor *subtitleTextColor;
@property(retain, nonatomic) UIColor *titleTextColor;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)init;	// IMP=0x0000000000306ded

@end

