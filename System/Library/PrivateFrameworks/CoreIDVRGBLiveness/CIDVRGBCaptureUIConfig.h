//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIDVRGBContext, NSArray, NSNumber, NSString, UINavigationController;
@protocol CIDVRGBCaptureDelegate, PADFrameQualityMonitor;

__attribute__((visibility("hidden")))
@interface CIDVRGBCaptureUIConfig : NSObject
{
    _Bool _requiresGoodLux;	// 8 = 0x8
    _Bool _enablePrintReplay;	// 9 = 0x9
    _Bool _enableIDMatching;	// 10 = 0xa
    CIDVRGBContext *_context;	// 16 = 0x10
    UINavigationController *_parentVC;	// 24 = 0x18
    unsigned long long _maxRetakeCount;	// 32 = 0x20
    NSArray *_gestureSequence;	// 40 = 0x28
    NSArray *_gestureTypes;	// 48 = 0x30
    NSNumber *_minRequiredGesturesCount;	// 56 = 0x38
    NSNumber *_gestureSkipSoftTimeout;	// 64 = 0x40
    NSNumber *_gestureSkipSoftAccessible;	// 72 = 0x48
    NSNumber *_timeout;	// 80 = 0x50
    NSNumber *_gestureSkipHardTimeout;	// 88 = 0x58
    NSNumber *_gestureSkipHardAccessible;	// 96 = 0x60
    NSNumber *_faceOutOfBoundFrames;	// 104 = 0x68
    NSNumber *_gestureCompletionDelay;	// 112 = 0x70
    NSNumber *_tutorialVideoDelay;	// 120 = 0x78
    NSNumber *_tutorialVideoDuration;	// 128 = 0x80
    NSNumber *_tutorialResumeDelay;	// 136 = 0x88
    NSNumber *_gestureDetectedSuccessDuration;	// 144 = 0x90
    NSNumber *_lastGestureExtraFrameDuration;	// 152 = 0x98
    NSNumber *_imageWidth;	// 160 = 0xa0
    NSNumber *_imageHeight;	// 168 = 0xa8
    NSNumber *_imageCompressionQuality;	// 176 = 0xb0
    id <PADFrameQualityMonitor> _qualityMonitor;	// 184 = 0xb8
    long long _targetDevice;	// 192 = 0xc0
    id <CIDVRGBCaptureDelegate> _delegate;	// 200 = 0xc8
    NSString *_issuerName;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000021175
@property(nonatomic) _Bool enableIDMatching; // @synthesize enableIDMatching=_enableIDMatching;
@property(nonatomic) _Bool enablePrintReplay; // @synthesize enablePrintReplay=_enablePrintReplay;
@property(retain, nonatomic) NSString *issuerName; // @synthesize issuerName=_issuerName;
@property(nonatomic) __weak id <CIDVRGBCaptureDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long targetDevice; // @synthesize targetDevice=_targetDevice;
@property(nonatomic) _Bool requiresGoodLux; // @synthesize requiresGoodLux=_requiresGoodLux;
@property(retain, nonatomic) id <PADFrameQualityMonitor> qualityMonitor; // @synthesize qualityMonitor=_qualityMonitor;
@property(retain, nonatomic) NSNumber *imageCompressionQuality; // @synthesize imageCompressionQuality=_imageCompressionQuality;
@property(retain, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(retain, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) NSNumber *lastGestureExtraFrameDuration; // @synthesize lastGestureExtraFrameDuration=_lastGestureExtraFrameDuration;
@property(retain, nonatomic) NSNumber *gestureDetectedSuccessDuration; // @synthesize gestureDetectedSuccessDuration=_gestureDetectedSuccessDuration;
@property(retain, nonatomic) NSNumber *tutorialResumeDelay; // @synthesize tutorialResumeDelay=_tutorialResumeDelay;
@property(retain, nonatomic) NSNumber *tutorialVideoDuration; // @synthesize tutorialVideoDuration=_tutorialVideoDuration;
@property(retain, nonatomic) NSNumber *tutorialVideoDelay; // @synthesize tutorialVideoDelay=_tutorialVideoDelay;
@property(retain, nonatomic) NSNumber *gestureCompletionDelay; // @synthesize gestureCompletionDelay=_gestureCompletionDelay;
@property(retain, nonatomic) NSNumber *faceOutOfBoundFrames; // @synthesize faceOutOfBoundFrames=_faceOutOfBoundFrames;
@property(retain, nonatomic) NSNumber *gestureSkipHardAccessible; // @synthesize gestureSkipHardAccessible=_gestureSkipHardAccessible;
@property(retain, nonatomic) NSNumber *gestureSkipHardTimeout; // @synthesize gestureSkipHardTimeout=_gestureSkipHardTimeout;
@property(retain, nonatomic) NSNumber *timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSNumber *gestureSkipSoftAccessible; // @synthesize gestureSkipSoftAccessible=_gestureSkipSoftAccessible;
@property(retain, nonatomic) NSNumber *gestureSkipSoftTimeout; // @synthesize gestureSkipSoftTimeout=_gestureSkipSoftTimeout;
@property(retain, nonatomic) NSNumber *minRequiredGesturesCount; // @synthesize minRequiredGesturesCount=_minRequiredGesturesCount;
@property(retain, nonatomic) NSArray *gestureTypes; // @synthesize gestureTypes=_gestureTypes;
@property(retain, nonatomic) NSArray *gestureSequence; // @synthesize gestureSequence=_gestureSequence;
@property(nonatomic) unsigned long long maxRetakeCount; // @synthesize maxRetakeCount=_maxRetakeCount;
@property(retain, nonatomic) UINavigationController *parentVC; // @synthesize parentVC=_parentVC;
@property(nonatomic) __weak CIDVRGBContext *context; // @synthesize context=_context;
- (id)initWithCaptureConfig:(id)arg1 imageQualityDelegate:(id)arg2 andCaptureDelegate:(id)arg3;	// IMP=0x0000000000020946

@end

