//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAttSiriController, CSConnectionListener;

@interface CSAttSiriConnectionManager : NSObject
{
    _Bool _supportsSpeechRecognitionOnDevice;	// 8 = 0x8
    _Bool _supportsSSR;	// 9 = 0x9
    CSAttSiriController *_attSiriController;	// 16 = 0x10
    CSConnectionListener *_endpointerListener;	// 24 = 0x18
    CSConnectionListener *_localSpeechRecognitionListener;	// 32 = 0x20
    CSConnectionListener *_attSiriSvcListener;	// 40 = 0x28
    CSConnectionListener *_ssrListener;	// 48 = 0x30
    CSConnectionListener *_rcProcessingListener;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000d636b
@property(nonatomic) _Bool supportsSSR; // @synthesize supportsSSR=_supportsSSR;
@property(nonatomic) _Bool supportsSpeechRecognitionOnDevice; // @synthesize supportsSpeechRecognitionOnDevice=_supportsSpeechRecognitionOnDevice;
@property(retain, nonatomic) CSConnectionListener *rcProcessingListener; // @synthesize rcProcessingListener=_rcProcessingListener;
@property(retain, nonatomic) CSConnectionListener *ssrListener; // @synthesize ssrListener=_ssrListener;
@property(retain, nonatomic) CSConnectionListener *attSiriSvcListener; // @synthesize attSiriSvcListener=_attSiriSvcListener;
- (void);	// IMP=0x00100000000d62e5
@property(retain, nonatomic) CSConnectionListener *localSpeechRecognitionListener; // @synthesize localSpeechRecognitionListener=_localSpeechRecognitionListener;
@property(retain, nonatomic) CSConnectionListener *endpointerListener; // @synthesize endpointerListener=_endpointerListener;
@property(retain, nonatomic) CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
- (void)_setupRCProcessingListener;	// IMP=0x00100000000d6139
- (void)_setupSSRListener;	// IMP=0x00100000000d5f5b
- (void)_setupAttSiriServiceListener;	// IMP=0x00100000000d5e09
- (void)_setupLocalSpeechRecognitionListener;	// IMP=0x00100000000d5bc2
- (void)_setupEndpointListener;	// IMP=0x00100000000d59e4
- (void)start;	// IMP=0x00100000000d59ce
- (void)setupListeners;	// IMP=0x00100000000d5966
- (id)init;	// IMP=0x00100000000d5901
- (id)initWithAttSiriController:(id)arg1 supportsAttentiveSiri:(_Bool)arg2 supportsSpeechRecognitionOnDevice:(_Bool)arg3 supportsSSR:(_Bool)arg4;	// IMP=0x00100000000d57cb

@end

