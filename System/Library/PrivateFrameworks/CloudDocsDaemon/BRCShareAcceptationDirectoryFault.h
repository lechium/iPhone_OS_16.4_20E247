//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface BRCShareAcceptationDirectoryFault
{
}

- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;	// IMP=0x00000000000bc29e
- (void)markNeedsTransformIntoNormalFault;	// IMP=0x00000000000bc279
- (void)deleteShareAcceptationFault;	// IMP=0x00000000000bc137
- (void)stageShareAcceptationFaultWithName:(id)arg1;	// IMP=0x00000000000bc03d
- (void)markLiveFromStageAsShareAcceptationFault;	// IMP=0x00000000000bbf6a
- (id)asShareAcceptationFault;	// IMP=0x00000000000bbf61
- (_Bool)isShareAcceptationFault;	// IMP=0x00000000000bbf59
- (id)initWithFilename:(id)arg1 itemID:(id)arg2 parentIDWhenSubitem:(id)arg3 appLibrary:(id)arg4 clientZone:(id)arg5 sharingOptions:(unsigned long long)arg6;	// IMP=0x00000000000bbb83

@end

