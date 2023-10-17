//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IDSTapToRadarPushPayload : NSObject
{
    NSString *_errorCode;	// 8 = 0x8
    NSString *_serverErrorDetail;	// 16 = 0x10
    NSString *_promptMessage;	// 24 = 0x18
    NSString *_promptTitle;	// 32 = 0x20
    NSString *_radarTitle;	// 40 = 0x28
    NSString *_radarDescription;	// 48 = 0x30
    NSString *_radarComponentName;	// 56 = 0x38
    NSString *_radarComponentVersion;	// 64 = 0x40
    NSString *_radarComponentId;	// 72 = 0x48
    NSString *_radarClassification;	// 80 = 0x50
    NSString *_radarReproducibility;	// 88 = 0x58
    NSArray *_radarKeywords;	// 96 = 0x60
    NSArray *_radarQueryParameter;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000007077d0
@property(readonly, nonatomic) NSArray *radarQueryParameter; // @synthesize radarQueryParameter=_radarQueryParameter;
@property(readonly, nonatomic) NSArray *radarKeywords; // @synthesize radarKeywords=_radarKeywords;
@property(readonly, nonatomic) NSString *radarReproducibility; // @synthesize radarReproducibility=_radarReproducibility;
@property(readonly, nonatomic) NSString *radarClassification; // @synthesize radarClassification=_radarClassification;
@property(readonly, nonatomic) NSString *radarComponentId; // @synthesize radarComponentId=_radarComponentId;
@property(readonly, nonatomic) NSString *radarComponentVersion; // @synthesize radarComponentVersion=_radarComponentVersion;
@property(readonly, nonatomic) NSString *radarComponentName; // @synthesize radarComponentName=_radarComponentName;
@property(readonly, nonatomic) NSString *radarDescription; // @synthesize radarDescription=_radarDescription;
@property(readonly, nonatomic) NSString *radarTitle; // @synthesize radarTitle=_radarTitle;
@property(readonly, nonatomic) NSString *promptTitle; // @synthesize promptTitle=_promptTitle;
@property(readonly, nonatomic) NSString *promptMessage; // @synthesize promptMessage=_promptMessage;
@property(readonly, nonatomic) NSString *serverErrorDetail; // @synthesize serverErrorDetail=_serverErrorDetail;
@property(readonly, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
- (id)initWithPushPayload:(id)arg1;	// IMP=0x0010000000706ec0

@end
