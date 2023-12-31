//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AUAudioUnit.h"

@class AUAudioUnitBusArray_XPC, AUCrashHandler, AUParameterTree, NSArray, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface AUAudioUnit_XPC : AUAudioUnit
{
    struct recursive_mutex _propListenerMutex;	// 8 = 0x8
    struct OpaqueAudioComponentInstance *_componentInstance;	// 72 = 0x48
    NSXPCConnection *_xpcConnection;	// 80 = 0x50
    int _remotePID;	// 88 = 0x58
    struct mach_timebase_info _remoteMachTimebaseInfo;	// 92 = 0x5c
    AUCrashHandler *_crashHandler;	// 104 = 0x68
    _Bool _canRender;	// 112 = 0x70
    _Bool _canProcess;	// 113 = 0x71
    _Bool _removingObserverWithContext;	// 114 = 0x72
    struct mutex _parameterTreeMutex;	// 120 = 0x78
    AUAudioUnitBusArray_XPC *_inputBusses;	// 184 = 0xb8
    AUAudioUnitBusArray_XPC *_outputBusses;	// 192 = 0xc0
    struct unique_ptr<AUProcAndUserData, std::default_delete<AUProcAndUserData>> _elementCountListenerToken;	// 200 = 0xc8
    struct vector<AUAudioUnit_XPC_PropListener, std::allocator<AUAudioUnit_XPC_PropListener>> _propListeners;	// 208 = 0xd0
    struct shared_ptr<caulk::synchronized<auoop::RenderPipePool, std::recursive_mutex>> _renderPipePool;	// 232 = 0xe8
    struct optional<auoop::RenderPipeUser> _renderPipeUser;	// 248 = 0xf8
    AUParameterTree *_cachedParameterTree;	// 328 = 0x148
    NSArray *_userPresets;	// 336 = 0x150
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00600000000b39a0
- (id).cxx_construct;	// IMP=0x00000000000af5a0
- (void).cxx_destruct;	// IMP=0x00000000000af478
- (id)speechVoices;	// IMP=0x00000000000af32a
- (void)cancelSpeechRequest;	// IMP=0x00000000000af1b2
- (void)synthesizeSpeechRequest:(id)arg1;	// IMP=0x00000000000af00d
- (id)messageChannelFor:(id)arg1;	// IMP=0x00000000000aeb53
- (CDStruct_6ad76789)remoteProcessAuditToken;	// IMP=0x00000000000aeaed
- (int)remoteProcessIdentifier;	// IMP=0x00000000000aea9f
- (_Bool)isLoadedInProcess;	// IMP=0x00000000000aea97
- (id)userPresets;	// IMP=0x00000000000ae612
- (id)presetStateFor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ae1af
- (_Bool)deleteUserPreset:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000adfec
- (_Bool)saveUserPreset:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000adddc
- (void)setCurrentPreset:(id)arg1;	// IMP=0x00000000000addc0
- (void)setFullStateForDocument:(id)arg1;	// IMP=0x00000000000adda4
- (void)setFullState:(id)arg1;	// IMP=0x00000000000add88
- (void)_setState:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000adcba
- (void)invalidateAllParameters;	// IMP=0x00000000000adb40
- (_Bool)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x00000000000ad9b7
- (_Bool)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x00000000000ad82e
- (id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2;	// IMP=0x00000000000ad48e
- (_Bool)providesUserInterface;	// IMP=0x00000000000ad45b
- (void)selectViewConfiguration:(id)arg1;	// IMP=0x00000000000ad2de
- (id)supportedViewConfigurations:(id)arg1;	// IMP=0x00000000000acf34
- (id)parametersForOverviewWithCount:(long long)arg1;	// IMP=0x00000000000acba5
- (float)getV2Parameter:(unsigned long long)arg1 sequenceNumber:(unsigned int)arg2;	// IMP=0x00000000000aca75
- (id)parameterTree;	// IMP=0x00000000000ac41c
- (void)propertiesChanged:(id)arg1;	// IMP=0x00000000000ac0a8
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000000abf7f
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000000abd4a
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;	// IMP=0x00000000000abaf2
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00000000000ab8b8
- (void)_refreshBusses:(unsigned int)arg1;	// IMP=0x00000000000ab5d7
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000ab441
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000ab2ef
- (void)_setValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ab12d
- (id)_getValueForKey:(id)arg1;	// IMP=0x00000000000ab0b1
- (id)_getValueForProperty:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000aaf30
- (CDUnknownBlockType)internalRenderBlock;	// IMP=0x00000000000aae60
- (void)reset;	// IMP=0x00000000000aae1f
- (void)remoteReset;	// IMP=0x00000000000aacf8
- (void)internalDeallocateRenderResources;	// IMP=0x00000000000aabd5
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;	// IMP=0x00000000000a833b
- (void)setTransportStateBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a824b
- (void)setMusicalContextBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a815b
- (_Bool)_setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000000a7fb4
- (id)outputBusses;	// IMP=0x00000000000a7f9f
- (id)inputBusses;	// IMP=0x00000000000a7f8a
- (void)_parameterTreeChanged;	// IMP=0x00000000000a7f46
- (void)dealloc;	// IMP=0x00000000000a7d54
- (void)didCrash:(id)arg1;	// IMP=0x00000000000a7968
- (void)didInvalidate;	// IMP=0x00000000000a78f7
- (id)_getInvalidationNotificationInfo;	// IMP=0x00000000000a7708
- (void)_invalidatePipePoolAndUser;	// IMP=0x00000000000a766f
- (void)_doOpen:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a6763
- (void)_setComponentInstance:(struct OpaqueAudioComponentInstance *)arg1;	// IMP=0x00000000000a6752

@end

