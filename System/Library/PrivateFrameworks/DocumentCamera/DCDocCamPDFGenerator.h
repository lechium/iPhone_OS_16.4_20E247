//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DCDocCamPDFGenerator : NSObject
{
}

+ (void)performPDFGenerationWithGenerator:(id)arg1 docInfoCollection:(id)arg2 imageCache:(id)arg3 progress:(id)arg4;	// IMP=0x0040000000024a12
+ (id)blockingGeneratepdfURLForDocumentInfoCollection:(id)arg1 imageCache:(id)arg2 withProgress:(id)arg3 error:(id *)arg4;	// IMP=0x0040000000024444
+ (void)generatePDFsIfNecessaryForDocumentInfoCollection:(id)arg1 imageCache:(id)arg2 displayWindow:(id)arg3 presentingViewController:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0040000000023e1e
+ (id)pdfURLForDocumentInfoCollection:(id)arg1;	// IMP=0x0040000000023bd1
+ (void)deleteAllDocCamPDFs;	// IMP=0x0040000000023aaf
+ (void)applicationWillTerminate:(id)arg1;	// IMP=0x0040000000023a9d
+ (void)deletePDFForDocumentInfoCollectionIfExists:(id)arg1;	// IMP=0x0040000000023a8b
+ (void)deletePDFFolderIfExistsForDocumentInfoCollection:(id)arg1;	// IMP=0x00400000000239e5
+ (void)createTmpDirectory:(id)arg1;	// IMP=0x004000000002387f
+ (void)createEmptyPDFFileAtURLIFNecessaryForDocumentInfoCollection:(id)arg1;	// IMP=0x00400000000236be
+ (id)versionPDFPathForDocumentInfoCollection:(id)arg1;	// IMP=0x00400000000235ae
+ (id)versionfolderPathForDocumentInfoCollection:(id)arg1;	// IMP=0x00400000000234cb
+ (id)folderPathForDocumentInfoCollection:(id)arg1;	// IMP=0x0040000000023469
+ (id)folderPathForDocumentInfoCollectionIdentifier:(id)arg1;	// IMP=0x00400000000233e6
+ (id)rootPDFFolderPath;	// IMP=0x004000000002335c
+ (id)fileManager;	// IMP=0x0040000000023343
+ (id)fileQueue;	// IMP=0x00400000000232c2
+ (id)syncGeneratorQueue;	// IMP=0x0040000000023241
+ (void)initialize;	// IMP=0x00400000000231b0

@end
