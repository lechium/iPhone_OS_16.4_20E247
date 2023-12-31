//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSMutableData, NSMutableDictionary, NSString;

@interface GTShaderProfilerStreamData : NSObject
{
    unsigned long long _version;	// 8 = 0x8
    unsigned long long _blitCallCount;	// 16 = 0x10
    NSMutableData *_gpuCommandInfoData;	// 24 = 0x18
    NSMutableData *_encoderInfoData;	// 32 = 0x20
    NSMutableData *_pipelineStateInfoData;	// 40 = 0x28
    NSMutableData *_commandBufferInfoData;	// 48 = 0x30
    NSMutableData *_functionInfoData;	// 56 = 0x38
    NSMutableArray *_archivedShaderProfilerData;	// 64 = 0x40
    NSMutableArray *_archivedGPUTimelineData;	// 72 = 0x48
    NSMutableArray *_archivedBatchIdFilteredCounterData;	// 80 = 0x50
    NSMutableArray *_archivedAPSData;	// 88 = 0x58
    NSMutableArray *_archivedAPSTimelineData;	// 96 = 0x60
    NSMutableArray *_archivedAPSCounterData;	// 104 = 0x68
    NSMutableArray *_unarchivedShaderProfilerData;	// 112 = 0x70
    NSMutableArray *_unarchivedGPUTimelineData;	// 120 = 0x78
    NSMutableArray *_unarchivedBatchIdFilteredCounterData;	// 128 = 0x80
    NSMutableArray *_unarchivedAPSData;	// 136 = 0x88
    NSMutableArray *_unarchivedAPSCounterData;	// 144 = 0x90
    NSMutableArray *_unarchivedAPSTimelineData;	// 152 = 0x98
    NSMutableArray *_strings;	// 160 = 0xa0
    NSMutableDictionary *_stringDict;	// 168 = 0xa8
    struct _NSRange _captureRange;	// 176 = 0xb0
    _Bool _dataSourceHasUnusedResources;	// 192 = 0xc0
    NSArray *_batchIdFilterableCounters;	// 200 = 0xc8
    unsigned int _gpuGeneration;	// 208 = 0xd0
    NSString *_metalPluginName;	// 216 = 0xd8
    NSString *_traceName;	// 224 = 0xe0
}

+ (id)steamDataFromData:(id)arg1;	// IMP=0x0020000000035c33
+ (id)dataFromArchivedDataURL:(id)arg1;	// IMP=0x0010000000035b5e
+ (id)streamDataClasses;	// IMP=0x0010000000035a33
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000035a2b
- (void).cxx_destruct;	// IMP=0x002000000003590c
@property(retain, nonatomic) NSString *traceName; // @synthesize traceName=_traceName;
@property(retain, nonatomic) NSString *metalPluginName; // @synthesize metalPluginName=_metalPluginName;
@property(readonly, nonatomic) unsigned int gpuGeneration; // @synthesize gpuGeneration=_gpuGeneration;
@property(readonly, nonatomic) NSArray *batchIdFilterableCounters; // @synthesize batchIdFilterableCounters=_batchIdFilterableCounters;
@property(readonly, nonatomic) NSArray *archivedBatchIdFilteredCounterData; // @synthesize archivedBatchIdFilteredCounterData=_archivedBatchIdFilteredCounterData;
@property(readonly, nonatomic) struct _NSRange dataSourceCaptureRange; // @synthesize dataSourceCaptureRange=_captureRange;
@property(readonly, nonatomic) _Bool dataSourceHasUnusedResources; // @synthesize dataSourceHasUnusedResources=_dataSourceHasUnusedResources;
@property(readonly, nonatomic) NSArray *strings; // @synthesize strings=_strings;
@property(readonly, nonatomic) NSData *functionInfoData; // @synthesize functionInfoData=_functionInfoData;
@property(readonly, nonatomic) NSArray *archivedAPSCounterData; // @synthesize archivedAPSCounterData=_archivedAPSCounterData;
@property(readonly, nonatomic) NSArray *archivedAPSTimelineData; // @synthesize archivedAPSTimelineData=_archivedAPSTimelineData;
@property(readonly, nonatomic) NSArray *archivedAPSData; // @synthesize archivedAPSData=_archivedAPSData;
@property(readonly, nonatomic) NSArray *archivedShaderProfilerData; // @synthesize archivedShaderProfilerData=_archivedShaderProfilerData;
@property(readonly, nonatomic) NSArray *archivedGPUTimelineData; // @synthesize archivedGPUTimelineData=_archivedGPUTimelineData;
@property(readonly, nonatomic) NSData *commandBufferInfoData; // @synthesize commandBufferInfoData=_commandBufferInfoData;
@property(readonly, nonatomic) NSData *pipelineStateInfoData; // @synthesize pipelineStateInfoData=_pipelineStateInfoData;
@property(readonly, nonatomic) NSData *encoderInfoData; // @synthesize encoderInfoData=_encoderInfoData;
@property(readonly, nonatomic) NSData *gpuCommandInfoData; // @synthesize gpuCommandInfoData=_gpuCommandInfoData;
@property(readonly, nonatomic) unsigned long long blitCallCount; // @synthesize blitCallCount=_blitCallCount;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
- (void)patchObjectIds:(id)arg1;	// IMP=0x00100000000352c6
- (void)debugDump:(id)arg1;	// IMP=0x00100000000351ae
@property(readonly, nonatomic) NSArray *unarchivedBatchIdFilteredCounterData; // @synthesize unarchivedBatchIdFilteredCounterData=_unarchivedBatchIdFilteredCounterData;
- (void)enumerateUnarchivedBatchIdFilteredCounterData:(CDUnknownBlockType)arg1;	// IMP=0x0010000000034d9c
@property(readonly, nonatomic) NSArray *unarchivedAPSTimelineData; // @synthesize unarchivedAPSTimelineData=_unarchivedAPSTimelineData;
@property(readonly, nonatomic) NSArray *unarchivedAPSCounterData; // @synthesize unarchivedAPSCounterData=_unarchivedAPSCounterData;
@property(readonly, nonatomic) NSArray *unarchivedAPSData; // @synthesize unarchivedAPSData=_unarchivedAPSData;
@property(readonly, nonatomic) NSArray *unarchivedGPUTimelineData; // @synthesize unarchivedGPUTimelineData=_unarchivedGPUTimelineData;
- (void)enumerateUnarchivedGPUTimelineData:(CDUnknownBlockType)arg1;	// IMP=0x001000000003429d
@property(readonly, nonatomic) NSArray *unarchivedShaderProfilerData; // @synthesize unarchivedShaderProfilerData=_unarchivedShaderProfilerData;
- (void)enumerateUnarchivedShaderProfilerData:(CDUnknownBlockType)arg1;	// IMP=0x0010000000033f00
@property(readonly, nonatomic) unsigned long long functionInfoCount;
@property(readonly, nonatomic) unsigned long long commandBufferInfoCount;
@property(readonly, nonatomic) unsigned long long pipelineStateInfoCount;
@property(readonly, nonatomic) unsigned long long encoderInfoCount;
@property(readonly, nonatomic) unsigned long long gpuCommandInfoCount;
@property(readonly, nonatomic) const CDStruct_74271b70 *functionInfo;
@property(readonly, nonatomic) const CDStruct_0ef168c5 *commandBuffers;
@property(readonly, nonatomic) const CDStruct_71113f05 *pipelineStates;
@property(readonly, nonatomic) const CDStruct_71113f05 *encoders;
@property(readonly, nonatomic) const CDStruct_0b014dd4 *gpuCommands;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000339be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000033594
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000032fc3
- (id)init;	// IMP=0x0010000000032f87

@end

