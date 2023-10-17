//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (XREngineeringValueHelpers)
+ (_Bool)xr_object:(id)arg1 isEqual:(id)arg2;	// IMP=0x00800000000181c4
- (_Bool)getTID:(unsigned long long *)arg1 process:(id *)arg2;	// IMP=0x001000000000e25e
- (_Bool)getPID:(int *)arg1 sessionUUID:(id *)arg2;	// IMP=0x001000000000e16d
- (_Bool)getURLSessionName:(id *)arg1 internalSessionID:(id *)arg2 backgroundIdentifier:(id *)arg3 isShared:(_Bool *)arg4 isEphemeral:(_Bool *)arg5;	// IMP=0x001000000000df76
- (void)enumerateTextBacktraceFrames:(CDUnknownBlockType)arg1;	// IMP=0x001000000000dd8d
- (void)enumerateKeyValuePairs:(CDUnknownBlockType)arg1;	// IMP=0x001000000000dc16
- (id)uuidFromEngineeringValue;	// IMP=0x001000000000dae2
- (id)xr_clipsStringRepresentation;	// IMP=0x001000000001832e
- (_Bool)xr_isCLIPSSymbol;	// IMP=0x00100000000181e5
- (int)agentStopDiagnosticsTypeCode;	// IMP=0x0010000000022d2a
@end
