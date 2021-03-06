/*	EQEMu: Everquest Server Emulator
	
	Copyright (C) 2001-2016 EQEMu Development Team (http://eqemulator.net)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; version 2 of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY except by those people which sell it, which
	are required to give you total support for your newly bought product;
	without even the implied warranty of MERCHANTABILITY or FITNESS FOR
	A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef COMMON_UF_LIMITS_H
#define COMMON_UF_LIMITS_H

#include "../types.h"
#include "../client_version.h"
#include "../skills.h"


namespace UF
{
	enum : int { Invalid = -1, Null, Safety };

	enum : bool { False = false, True = true };

	// pre-declarations
	namespace invtype {
		inline EQEmu::versions::ClientVersion InvTypeRef() { return EQEmu::versions::ClientVersion::UF; }

		enum : int { InvTypeInvalid = -1, InvTypeBegin };

		enum InventoryType : int {
			InvTypePossessions = InvTypeBegin,
			InvTypeBank,
			InvTypeSharedBank,
			InvTypeTrade,
			InvTypeWorld,
			InvTypeLimbo,
			InvTypeTribute,
			InvTypeGuildTribute,
			InvTypeMerchant,
			InvTypeCorpse,
			InvTypeBazaar,
			InvTypeInspect,
			InvTypeViewMODPC,
			InvTypeViewMODBank,
			InvTypeViewMODSharedBank,
			InvTypeViewMODLimbo,
			InvTypeAltStorage,
			InvTypeArchived,
			InvTypeOther,
			InvTypeCount
		};
	
	} /*invtype*/

	namespace invslot {
		inline EQEmu::versions::ClientVersion InvSlotRef() { return EQEmu::versions::ClientVersion::UF; }

		enum : int { InvSlotInvalid = -1, InvSlotBegin };

		enum PossessionsSlot : int {
			PossessionsCharm = InvSlotBegin,
			PossessionsEar1,
			PossessionsHead,
			PossessionsFace,
			PossessionsEar2,
			PossessionsNeck,
			PossessionsShoulders,
			PossessionsArms,
			PossessionsBack,
			PossessionsWrist1,
			PossessionsWrist2,
			PossessionsRange,
			PossessionsHands,
			PossessionsPrimary,
			PossessionsSecondary,
			PossessionsFinger1,
			PossessionsFinger2,
			PossessionsChest,
			PossessionsLegs,
			PossessionsFeet,
			PossessionsWaist,
			PossessionsPowerSource,
			PossessionsAmmo,
			PossessionsGeneral1,
			PossessionsGeneral2,
			PossessionsGeneral3,
			PossessionsGeneral4,
			PossessionsGeneral5,
			PossessionsGeneral6,
			PossessionsGeneral7,
			PossessionsGeneral8,
			PossessionsCursor,
			PossessionsCount
		};

		const int EquipmentBegin = PossessionsCharm;
		const int EquipmentEnd = PossessionsAmmo;
		const int EquipmentCount = (EquipmentEnd - EquipmentBegin + 1);

		const int GeneralBegin = PossessionsGeneral1;
		const int GeneralEnd = PossessionsGeneral8;
		const int GeneralCount = (GeneralEnd - GeneralBegin + 1);
	
	} /*invslot*/

	namespace invbag {
		inline EQEmu::versions::ClientVersion InvBagRef() { return EQEmu::versions::ClientVersion::UF; }

		enum : int { InvBagInvalid = -1, InvBagBegin };
	
	} /*invbag*/

	namespace invaug {
		inline EQEmu::versions::ClientVersion InvAugRef() { return EQEmu::versions::ClientVersion::UF; }

		enum : int { InvAugInvalid = -1, InvAugBegin };
	
	} /*invaug*/

	namespace item {
		inline EQEmu::versions::ClientVersion ItemRef() { return EQEmu::versions::ClientVersion::UF; }

		enum ItemPacketType : int {
			ItemPacketMerchant = 100,
			ItemPacketTradeView = 101,
			ItemPacketLoot = 102,
			ItemPacketTrade = 103,
			ItemPacketCharInventory = 105,
			ItemPacketLimbo = 106,
			ItemPacketWorldContainer = 107,
			ItemPacketTributeItem = 108,
			ItemPacketGuildTribute = 109,
			ItemPacketCharmUpdate = 110,
			ItemPacket11 = 111
		};
	
	} /*item*/

	namespace profile {
		inline EQEmu::versions::ClientVersion ProfileRef() { return EQEmu::versions::ClientVersion::UF; }
	
	} /*profile*/

	namespace constants {
		inline EQEmu::versions::ClientVersion ConstantsRef() { return EQEmu::versions::ClientVersion::UF; }
	
	} /*constants*/

	namespace behavior {
		inline EQEmu::versions::ClientVersion BehaviorRef() { return EQEmu::versions::ClientVersion::UF; }
	
	} /*behavior*/

	namespace skills {
		inline EQEmu::versions::ClientVersion SkillsRef() { return EQEmu::versions::ClientVersion::UF; }
	
	} /*skills*/


	// declarations
	namespace invtype {
		const size_t InvTypePossessionsSize = invslot::PossessionsCount;
		const size_t InvTypeBankSize = 24;
		const size_t InvTypeSharedBankSize = 2;
		const size_t InvTypeTradeSize = 8;
		const size_t InvTypeWorldSize = 10;
		const size_t InvTypeLimboSize = 36;
		const size_t InvTypeTributeSize = 5;
		const size_t InvTypeGuildTributeSize = 2;
		const size_t InvTypeMerchantSize = 80;
		const size_t InvTypeCorpseSize = InvTypePossessionsSize;
		const size_t InvTypeBazaarSize = 80;
		const size_t InvTypeInspectSize = invslot::EquipmentCount;
		const size_t InvTypeViewMODPCSize = InvTypePossessionsSize;
		const size_t InvTypeViewMODBankSize = InvTypeBankSize;
		const size_t InvTypeViewMODSharedBankSize = InvTypeSharedBankSize;
		const size_t InvTypeViewMODLimboSize = InvTypeLimboSize;
		const size_t InvTypeAltStorageSize = 0;//unknown - "Shroud Bank"
		const size_t InvTypeArchivedSize = 0;//unknown
		const size_t InvTypeOtherSize = 0;//unknown

		const size_t NPCTradeSize = 4;

		extern size_t InvTypeSize(int inv_type);
		extern const char* InvTypeName(int inv_type);
	
	} /*invtype*/

	namespace invslot {
		const int BankBegin = 2000;
		const int BankEnd = (BankBegin + invtype::InvTypeBankSize) - 1;

		const int SharedBankBegin = 2500;
		const int SharedBankEnd = (SharedBankBegin + invtype::InvTypeSharedBankSize) - 1;

		const int TradeBegin = 3000;
		const int TradeEnd = (TradeBegin + invtype::InvTypeTradeSize) - 1;
		const int TradeNPCEnd = 3003;

		const int WorldBegin = 4000;
		const int WorldEnd = (WorldBegin + invtype::InvTypeWorldSize) - 1;

		const int TributeBegin = 400;
		const int TributeEnd = (TributeBegin + invtype::InvTypeTributeSize) - 1;

		const int GuildTributeBegin = 450;
		const int GuildTributeEnd = (GuildTributeBegin + invtype::InvTypeGuildTributeSize) - 1;

		const int CorpseBegin = invslot::PossessionsGeneral1;
		const int CorpseEnd = invslot::PossessionsGeneral1 + invslot::PossessionsCursor;

		extern const char* InvPossessionsSlotName(int inv_slot);
		extern const char* InvCorpseSlotName(int inv_slot);
		extern const char* InvSlotName(int inv_type, int inv_slot);
	
	} /*invslot*/

	namespace invbag {
		const size_t ItemBagSize = 10;

		const int GeneralBagsBegin = 262;
		const int GeneralBagsSize = invslot::GeneralCount * ItemBagSize;
		const int GeneralBagsEnd = (GeneralBagsBegin + GeneralBagsSize) - 1;

		const int CursorBagBegin = 342;
		const int CursorBagSize = ItemBagSize;
		const int CursorBagEnd = (CursorBagBegin + CursorBagSize) - 1;

		const int BankBagsBegin = 2032;
		const int BankBagsSize = (invtype::InvTypeBankSize * ItemBagSize);
		const int BankBagsEnd = (BankBagsBegin + BankBagsSize) - 1;

		const int SharedBankBagsBegin = 2532;
		const int SharedBankBagsSize = invtype::InvTypeSharedBankSize * ItemBagSize;
		const int SharedBankBagsEnd = (SharedBankBagsBegin + SharedBankBagsSize) - 1;

		const int TradeBagsBegin = 3031;
		const int TradeBagsSize = invtype::InvTypeTradeSize * ItemBagSize;
		const int TradeBagsEnd = (TradeBagsBegin + TradeBagsSize) - 1;

		extern const char* InvBagIndexName(int bag_index);
	
	} /*invbag*/

	namespace invaug {
		const size_t ItemAugSize = 5;

		extern const char* InvAugIndexName(int aug_index);
	
	} /*invaug*/

	namespace item {

	} /*item*/

	namespace profile {
		const size_t TributeSize = invtype::InvTypeTributeSize;

		const size_t BandoliersSize = 20;		// number of bandolier instances
		const size_t BandolierItemCount = 4;	// number of equipment slots in bandolier instance

		const size_t PotionBeltSize = 5;

		const size_t SkillArraySize = 100;
	
	} /*profile*/

	namespace constants {
		const size_t CharacterCreationLimit = 12;

		const size_t SayLinkBodySize = 50;
	
	} /*constants*/

	namespace behavior {
		const bool ConcatenateInvTypeLimbo = true;

		const bool AllowOverLevelEquipment = true;

		const bool AllowEmptyBagInBag = false;
		const bool AllowClickCastFromBag = false;

		const bool CoinHasWeight = false;
	
	} /*behavior*/

	namespace skills {
		const size_t LastUsableSkill = EQEmu::skills::SkillTripleAttack;
	
	} /*skills*/

}; /*UF*/

#endif /*COMMON_UF_LIMITS_H*/
