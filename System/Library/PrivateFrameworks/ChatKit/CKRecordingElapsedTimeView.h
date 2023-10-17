//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSDate, NSDateComponentsFormatter, NSTimer, UILabel;

__attribute__((visibility("hidden")))
@interface CKRecordingElapsedTimeView : UIView
{
    NSDateComponentsFormatter *__durationFormatter;	// 8 = 0x8
    UILabel *__timeLabel;	// 16 = 0x10
    UIView *__recordingDotView;	// 24 = 0x18
    NSTimer *__updateTimer;	// 32 = 0x20
    NSDate *__startTime;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002ea6db
@property(readonly, nonatomic) NSDate *_startTime; // @synthesize _startTime=__startTime;
@property(readonly, nonatomic) NSTimer *_updateTimer; // @synthesize _updateTimer=__updateTimer;
@property(readonly, nonatomic) UIView *_recordingDotView; // @synthesize _recordingDotView=__recordingDotView;
@property(readonly, nonatomic) UILabel *_timeLabel; // @synthesize _timeLabel=__timeLabel;
@property(readonly, nonatomic) NSDateComponentsFormatter *_durationFormatter; // @synthesize _durationFormatter=__durationFormatter;
- (void)_endRecordingAnimation;	// IMP=0x00000000002ea622
- (void)_beginRecordingAnimation;	// IMP=0x00000000002ea40d
- (void)resetTimer;	// IMP=0x00000000002ea3d0
- (void)endTimer;	// IMP=0x00000000002ea368
- (void)startTimer;	// IMP=0x00000000002ea235
- (void)_update:(id)arg1;	// IMP=0x00000000002ea1b5
- (void)layoutSubviews;	// IMP=0x00000000002e9fab
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002e9f8e
- (void)dealloc;	// IMP=0x00000000002e9f27
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e9ec9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002e9e5a
- (void)_commonCAMElapsedTimeViewInitialization;	// IMP=0x00000000002e9bd2

@end
