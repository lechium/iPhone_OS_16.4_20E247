//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DMDSUManagerInstallTask : NSObject
{
}

+ (id)productKeyOrDefaultFromStatus:(id)arg1;	// IMP=0x002000000007f2c2
+ (id)productKeyFromStatus:(id)arg1;	// IMP=0x001000000007f233
+ (id)_dmfStatusErrorFromSUStatusError:(id)arg1;	// IMP=0x001000000007f166
+ (id)defaultProductKey;	// IMP=0x001000000007f159
+ (id)sharedInstallTask;	// IMP=0x001000000007f104
- (id)currentStatusWithError:(id *)arg1;	// IMP=0x004000000007f32b
- (_Bool)startInstallWithError:(id *)arg1;	// IMP=0x001000000007f323
- (_Bool)startDownloadWithError:(id *)arg1;	// IMP=0x001000000007f31b
- (id)availableUpdateWithVersion:(id)arg1 useDelay:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000007f313
- (_Bool)removeUpdateWithError:(id *)arg1;	// IMP=0x001000000007f30b

@end

