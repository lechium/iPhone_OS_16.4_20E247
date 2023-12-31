//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CIDVRGBCaptureUIResult : NSObject
{
    NSData *_imageData;	// 8 = 0x8
    NSURL *_videoURL;	// 16 = 0x10
    NSNumber *_livenessLabel;	// 24 = 0x18
    NSArray *_gestureSequence;	// 32 = 0x20
    NSArray *_assessmentsFAC;	// 40 = 0x28
    NSArray *_timestampsFAC;	// 48 = 0x30
    NSNumber *_assessmentFAC;	// 56 = 0x38
    NSArray *_assessmentsTA;	// 64 = 0x40
    NSNumber *_assessmentTA;	// 72 = 0x48
    NSNumber *_maxNccLow;	// 80 = 0x50
    NSNumber *_maxNccHigh;	// 88 = 0x58
    NSNumber *_ignoredStitches;	// 96 = 0x60
    NSArray *_assessmentsPRD;	// 104 = 0x68
    NSNumber *_assessmentFakePRD;	// 112 = 0x70
    NSNumber *_assessmentLivePRD;	// 120 = 0x78
    NSNumber *_assessmentID;	// 128 = 0x80
    NSArray *_timestampsID;	// 136 = 0x88
    NSArray *_timestampsButtonPressed;	// 144 = 0x90
    NSString *_ageLabel;	// 152 = 0x98
    NSString *_sexLabel;	// 160 = 0xa0
    NSString *_skintoneLabel;	// 168 = 0xa8
    NSString *_ethnicityLabel;	// 176 = 0xb0
    NSString *_faceHairLabel;	// 184 = 0xb8
    NSString *_headgearLabel;	// 192 = 0xc0
    NSString *_glassesLabel;	// 200 = 0xc8
    NSArray *_luxValues;	// 208 = 0xd0
    NSData *_boundACL;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000000339b
@property(retain, nonatomic) NSData *boundACL; // @synthesize boundACL=_boundACL;
@property(retain, nonatomic) NSArray *luxValues; // @synthesize luxValues=_luxValues;
@property(retain, nonatomic) NSString *glassesLabel; // @synthesize glassesLabel=_glassesLabel;
@property(retain, nonatomic) NSString *headgearLabel; // @synthesize headgearLabel=_headgearLabel;
@property(retain, nonatomic) NSString *faceHairLabel; // @synthesize faceHairLabel=_faceHairLabel;
@property(retain, nonatomic) NSString *ethnicityLabel; // @synthesize ethnicityLabel=_ethnicityLabel;
@property(retain, nonatomic) NSString *skintoneLabel; // @synthesize skintoneLabel=_skintoneLabel;
@property(retain, nonatomic) NSString *sexLabel; // @synthesize sexLabel=_sexLabel;
@property(retain, nonatomic) NSString *ageLabel; // @synthesize ageLabel=_ageLabel;
@property(retain, nonatomic) NSArray *timestampsButtonPressed; // @synthesize timestampsButtonPressed=_timestampsButtonPressed;
@property(retain, nonatomic) NSArray *timestampsID; // @synthesize timestampsID=_timestampsID;
@property(retain, nonatomic) NSNumber *assessmentID; // @synthesize assessmentID=_assessmentID;
@property(retain, nonatomic) NSNumber *assessmentLivePRD; // @synthesize assessmentLivePRD=_assessmentLivePRD;
@property(retain, nonatomic) NSNumber *assessmentFakePRD; // @synthesize assessmentFakePRD=_assessmentFakePRD;
@property(retain, nonatomic) NSArray *assessmentsPRD; // @synthesize assessmentsPRD=_assessmentsPRD;
@property(retain, nonatomic) NSNumber *ignoredStitches; // @synthesize ignoredStitches=_ignoredStitches;
@property(retain, nonatomic) NSNumber *maxNccHigh; // @synthesize maxNccHigh=_maxNccHigh;
@property(retain, nonatomic) NSNumber *maxNccLow; // @synthesize maxNccLow=_maxNccLow;
@property(retain, nonatomic) NSNumber *assessmentTA; // @synthesize assessmentTA=_assessmentTA;
@property(retain, nonatomic) NSArray *assessmentsTA; // @synthesize assessmentsTA=_assessmentsTA;
@property(retain, nonatomic) NSNumber *assessmentFAC; // @synthesize assessmentFAC=_assessmentFAC;
@property(retain, nonatomic) NSArray *timestampsFAC; // @synthesize timestampsFAC=_timestampsFAC;
@property(retain, nonatomic) NSArray *assessmentsFAC; // @synthesize assessmentsFAC=_assessmentsFAC;
@property(retain, nonatomic) NSArray *gestureSequence; // @synthesize gestureSequence=_gestureSequence;
@property(retain, nonatomic) NSNumber *livenessLabel; // @synthesize livenessLabel=_livenessLabel;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;

@end

