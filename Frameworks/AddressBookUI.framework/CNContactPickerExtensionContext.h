/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactPickerExtensionContext : NSExtensionContext <CNContactPickerHostProtocol, CNContactPickerServiceProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)pickerDidCancel;
- (void)pickerDidSelectContactWithRecordID:(int)arg1 vCardData:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(int)arg4;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;

@end